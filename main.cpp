#include <cstdio>
#include <cstring>
#include <algorithm>
#include <ctime>
#include <thread>
#include "sampler.h"

const int OFFSET_M = 0;
const int OFFSET_P = 9;
const int OFFSET_S = 18;
const int OFFSET_Z = 27;


void thread_task(double result[], const int hai[], const int rest[], int seed, int times, int max_round) {
	Sampler *smp = new Sampler(hai, rest, seed);
	smp->sample(result, times, max_round);
	delete smp;
}


const double round_prob[] = {1.000000, 1.000000, 0.999708, 0.998029, 0.991947, 0.976532, 0.946340, 0.897968, 0.831425, 0.750198, 0.660036, 0.567684, 0.479381, 0.399071, 0.329266, 0.270215, 0.221551, 0.182120, 0.00000};

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	static char s[256];
	static int hai[9 * 3 + 7];
	static int rest[9 * 3 + 7];
	static int stack[20];
    static double prob_fixup[18];

	for (int i = 0; i < 9 * 3 + 7; ++ i) {
		rest[i] = 4;
		hai[i] = 0;
	}

    int rest_num;
    scanf("%d", &rest_num);
    for (int i = 0; i < 34; ++ i) scanf("%d", &hai[i]);
    for (int i = 0; i < 34; ++ i) scanf("%d", &rest[i]);
	//printf("Num process: ");
	//int num_process;
	//scanf("%d", &num_process);
	int num_process = std::max(std::min(8, rest_num / 4), 1);
	
	if (num_process == 0) {
		for (int i = 0; i < 34; ++ i) {
			if (hai[i] > 0) {
				printf("%d", i);
				break;
			}
		}
		return 0;
	}

	int iter = 0, seed = int(time(NULL));

	double **result = new double*[num_process];
	double **subresult = new double*[num_process];
	std::thread **thd = new std::thread*[num_process];

	for (int i = 0; i < num_process; ++ i) {
		result[i] = new double[34];
		subresult[i] = new double[34];
	}
	for (int i = 0; i < 34; ++ i) {
		for (int j = 0; j < num_process; ++ j)
			result[j][i] = 0;
	}

	int rest_round = std::max(rest_num / 4, 1);

    int rrtmp = 18 - rest_round - 1;
    for (int i = rrtmp; i <= 18; ++ i) {
        prob_fixup[i - rrtmp] = round_prob[i] / round_prob[rrtmp];
    }

    int sample_times = 10000;

    if (rest_round <= 12) sample_times += 2000;
    if (rest_round <= 6) sample_times += 2000;

	double epc[34];

	for (int t = 0; t < 10; ++ t) {
		
		for (int i = 0; i < num_process; ++ i) {
			thd[i] = new std::thread(thread_task, subresult[i], hai, rest, seed + iter * num_process + i,
				 sample_times, (i + 1) * rest_round / num_process );
		}
		for (int i = 0; i < num_process; ++ i) {
			thd[i]->join();
		}
	for (int i = 0; i < num_process; ++ i) {
			for (int j = 0; j < 34; ++ j) {
				result[i][j] += subresult[i][j];
			}
			delete thd[i];
		}
		iter ++;
    }
	FILE *flog = fopen("log.txt", "a");
    fprintf(flog, "Rest round: %d\n", rest_round);
	for (int i = 0; i < 34; ++ i) {
		for (int j = 0; j < hai[i]; ++ j) {
			fprintf(flog, "%d%c", i % 9 + 1, "mpsz"[i / 9]);
		}
	}
	fprintf(flog, "\n");

	fprintf(flog, "Round");
	for (int i = 0; i < 34; ++ i) {
		if (hai[i] > 0) {
			fprintf(flog, "\t%d%c\t", (i % 9) + 1, "mpsz"[i / 9]);
		}
	}
    fprintf(flog, "\tprob");
	fprintf(flog, "\n");
	for (int i = 0; i < num_process; ++ i) {
		fprintf(flog, "%d\t", (i + 1) * rest_round / num_process);
		for (int j = 0; j < 34; ++ j) {
			if (hai[j] > 0) {
				fprintf(flog, "\t%.2lf%%", 100.0 * result[i][j] / iter);
			}
		}
        fprintf(flog, "\t%.2lf%%", 100 * prob_fixup[(i + 1) * rest_round / num_process]);
		fprintf(flog, "\n");
    }



	for (int i = 0; i < 34; ++ i) epc[i] = 0;
	for (int i = num_process - 1; i >= 0; -- i) {
		for (int j = 0; j < 34; ++ j) {
			double prob = result[i][j] / iter;
			if (i > 0) prob = prob - (result[i - 1][j] / iter);
			result[i][j] = prob * prob_fixup[(i + 1) * rest_round / num_process];
            epc[j] += result[i][j];
		}
	}
    for (int i = 1; i < num_process; ++ i) {
        for (int j = 0; j < 34; ++ j) {
            result[i][j] += result[i - 1][j];
        }
    }

	int order[34];
	for (int i = 0; i < 34; ++ i) {
		order[i] = i;
	}
	/* argsort */
	for (int i = 0; i < 34; ++ i) {
		for (int j = i; j > 0; j --) {
			if ( epc[order[j - 1]] <  epc[order[j]]) {
				std::swap(order[j - 1], order[j]);
		}
			else break;
		}
	}

	int opt = 0;
	for (int i = 0; i < 34; ++ i) {
		if (hai[order[i]] > 0) {
            opt = order[i];
            break;
		}
	}

	bool isNotin = true;
	for (int i = 0; i < 34; ++ i) {
		if (hai[i] > 0 && result[num_process - 1][i] / iter > 1e-4) {
			isNotin = false;
		}
	}
	if (isNotin) {
		// find a safe hai
		for (int i = 0; i < 34; ++ i) {
			if (hai[i] > 0 && rest[i] + hai[i] <= rest[opt] + hai[opt]) {
				opt = i;
			}
		}
	}


	fprintf(flog, "Round");
	for (int i = 0; i < 34; ++ i) {
		if (hai[i] > 0) {
			fprintf(flog, "\t%d%c\t", (i % 9) + 1, "mpsz"[i / 9]);
		}
	}
	fprintf(flog, "\n");
	for (int i = 0; i < num_process; ++ i) {
		fprintf(flog, "%d\t", (i + 1) * rest_round / num_process);
		for (int j = 0; j < 34; ++ j) {
			if (hai[j] > 0) {
				fprintf(flog, "\t%.2lf%%", 100.0 * result[i][j]);
			}
		}
		fprintf(flog, "\n");
	}
	for (int i = 0; i < 34; ++ i) {
		if (hai[order[i]] > 0) {
			fprintf(flog, "%d%c: %lf\n", order[i] % 9 + 1, "mpsz"[order[i] / 9], epc[order[i]]);
		}
	}
    
    if (isNotin) {
        fprintf(flog, "Noting: ");
        for (int i = 0; i < 34; ++ i) fprintf(flog, "%d ", hai[i] + rest[i]);
        fprintf(flog, "\n");
    }

	fprintf(flog, "Result: %d\n", opt);


	fprintf(flog, "\n\n");
	fclose(flog);

	printf("%d", opt);
	

	for (int i = 0; i < num_process; ++ i) {
		delete[] subresult[i];
		delete[] result[i];
	}
	delete[] subresult;
	delete[] result;
	delete[] thd;
	return 0;
}
