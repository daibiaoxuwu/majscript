#include <iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include <ctime>
#include "Hu_Automation.h"
FILE* fin, *fout, *flog;
const double round_prob[19] = {1.000000, 1.000000, 0.999708, 0.998029, 0.991947, 0.976532, 0.946340, 0.897968, 0.831425,
                               0.750198, 0.660036, 0.567684, 0.479381, 0.399071, 0.329266, 0.270215, 0.221551, 0.182120,
                               0.00000};
const long long C[5][5] = {{1},
                           {1, 1},
                           {1, 2, 1},
                           {1, 3, 3, 1},
                           {1, 4, 6, 4, 1}};
const char* mname[]={" 1W", " 2W", " 3W", " 4W", " 5W", " 6W", " 7W", " 8W", " 9W", " 1B", " 2B", " 3B", " 4B", " 5B", " 6B", " 7B", " 8B", " 9B", " 1T", " 2T", " 3T", " 4T", " 5T", " 6T", " 7T", " 8T", " 9T", "EST", "STH", "WST", "NTH", "BAI", " FA", "ZHO"};
const int f_len3 = 20;
unsigned long long f[16][2][f_len3][Hu_Automation::MX];


double fact[136];

Hu_Automation HA;

int decide(const int *_hand_cnts, const int *known_remain_cnt, int round) {
    int hand_cnts[35];
    memcpy(hand_cnts, _hand_cnts, 35 * sizeof(int));

    int remaining_cards = 0;
    for (int i = 0; i < 34; ++i) remaining_cards += known_remain_cnt[i];

    int choice_num=0;
    int hand_choices[34];
    memset(hand_choices,0, sizeof(hand_choices));
    for (int temp = 0; temp < 34; ++temp) {
        if(hand_cnts[temp]>0) hand_choices[choice_num++]=temp;
    }
    for (int t = 0; t < f_len3; ++t)
        for (int k = 0; k < Hu_Automation::MX; ++k)
            f[0][0][t][k] = 0;
    f[0][0][0][Hu_Automation::max_hu_value + 1] = 1;
    int branch_choice_num=1;
    for (int i = 1; i <= 34; ++i) {
        int nw = i & 1;
        for (int p = 0; p <= branch_choice_num; ++p) {
            for (int t = 0; t < f_len3; ++t)
                for (int k = 0; k < Hu_Automation::MX; ++k)
                    f[p][nw][t][k] = 0;
        }
        for (int p = 0; p <= branch_choice_num; ++p) {
//            for (int j = min(15,remaining_cards); j>=0; --j) {
            for (int j = min(remaining_cards,f_len3 - 5); j>=0; --j) {
                for (int k = 1; k <= HA.tot; ++k){
                    if ((p == branch_choice_num && hand_choices[branch_choice_num - 1] == i - 1) ||
                        f[p][nw ^ 1][j][k] > 0) {
//                        if(k<=Hu_Automation::max_hu_value && f[p][nw^1][j][k]>0)
//                            printf("%d %d %d %d=%d\n",p,i,j,k,f[p][nw^1][j][k]);
                        for (int t = known_remain_cnt[i - 1]; t >= 0; --t) {
                            int piece = (i > 27 ? 9 : i % 9);
                            if (p < branch_choice_num) {
                                f[p][nw][j + t][HA.node[k].child[hand_cnts[i - 1] + t][piece]] +=
                                        f[p][nw ^ 1][j][k] * C[known_remain_cnt[i - 1]][t];
                            }
                            if (p == branch_choice_num) {
                                f[p][nw][j + t][HA.node[k].child[hand_cnts[i - 1] - 1 + t][piece]] +=
                                        f[0][nw ^ 1][j][k] * C[known_remain_cnt[i - 1]][t];
                            }
                        }
                    }
                }
            }
        }
        if(hand_choices[branch_choice_num-1]==i-1) {
            ++branch_choice_num;
        }
        //-debug
        else{
            for (int j = min(remaining_cards,f_len3-1); j >= 0; --j) {
                for (int k = 1; k <= Hu_Automation::max_hu_value; ++k) {
                    assert(f[branch_choice_num][nw][j][k] == 0);
                }
            }
        }
        //debug

//        printf("result of i:%d branch:%d num:%d\n",i,branch_choice_num,hand_cnts[i-1]);
//        for (int p = 0; p < branch_choice_num; ++p) {
//            for (int k = 1; k <= Hu_Automation::max_hu_value; ++k) {
//                printf("%d ",f[p][nw][0][k]);
//            }
//            printf("\n");
//        }
    }
    double temps[17];
    double temps2[17];
    unsigned long long temps3[17];
    unsigned long long temps4[17];


    int best_card = 0;
    double best_expectance = 1e-9;

    int close_to_hu = 100;
    for (int p = 0; p < branch_choice_num; ++p) {
        fprintf(flog,"%3s,", p==0?"   ":mname[hand_choices[p-1]]);
        double last_possibility = 0;
        double fail_possibility = 0;
        for (int nw = 34 & 1, i = 1; i <= 13; ++i) {
            unsigned long long ans = 0;
            for (int j = 1; j <= HA.tot; ++j)  ans += f[p][nw][i][j];
            unsigned long long ans2 = 0;
            for (int j = 1; j <= Hu_Automation::max_hu_value; ++j)  ans2 += f[p][nw][i][j] * (j+4);
            double sum = ans2 * fact[i] * fact[remaining_cards - i] / fact[remaining_cards];//not hu at this round,from i=1:~1(tianhu) to i=18:liuju
            //a possibility including the next one
            fprintf(flog,"%llu,", ans2);//long long:+-9e18
            temps3[i] =  ans + f[p][nw][i][0];

            temps[i] = sum;
            fail_possibility += (sum - last_possibility) * round_prob[min(i - 2 + round, 18)];
            temps2[i] = fail_possibility;
            last_possibility = sum;
        }
        for (int j = 1; j <= Hu_Automation::max_hu_value; ++j) {
            fprintf(flog, "\n f[%d],",j);
            for (int i = 1; i <= 13; ++i) {
                fprintf(flog, "%llu,", f[p][34&1][i][j]);
            }
        }
        fprintf(flog,"\n 0,");
        for (int i = 1; i <= 16; ++i) {
            fprintf(flog,"%lf,", temps[i]);
        }
        fprintf(flog,"\n 0,");
        for (int i = 1; i <= 16; ++i) {
            fprintf(flog,"%lf,", temps2[i]);
        }
        int num_cards_to_hu; for (num_cards_to_hu = 1; num_cards_to_hu <= 16 && temps[num_cards_to_hu] < 1e-10; ++num_cards_to_hu);

        fprintf(flog,"%d, %lf\n",hand_choices[max(p - 1,0)],fail_possibility);
        if (p > 0 && fail_possibility > best_expectance)best_card = hand_choices[p - 1], best_expectance = fail_possibility,close_to_hu=num_cards_to_hu;
    }
    printf("exp:%lf, %lf, %d",best_expectance,best_expectance/round_prob[min(round, 17)],close_to_hu);
    if(round > 6 && best_expectance/6/round_prob[min(round, 17)]<(close_to_hu > 3 ? 0.15 : (close_to_hu > 2 ? 0.12 : (close_to_hu == 2 ? 0.08 : 0)))){//play safe
        int less = 5;
        for (int i = 33; i>=0 ; --i) {
            if (_hand_cnts[i] > 0 && known_remain_cnt[i]<less)less=known_remain_cnt[i],best_card=i;
        }
        printf("safe");
    }
    printf("\n");
    return best_card;
}
int main() {
    fact[0] = 1;
    for (int i = 1; i <= 136; ++i) fact[i] = fact[i - 1] * i;

    fin = fopen("input.txt", "r");
    fout = fopen("output.txt", "w");
    flog = fopen("log.csv", "a");

    time_t rawtime;
    struct tm * timeinfo;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    printf ( "%s ", asctime (timeinfo) );
    fprintf(flog,"%s,\n", asctime (timeinfo) );

    int rest_num; fscanf(fin,"%d", &rest_num);
    int hand_cnt[35]; for (int i = 0; i < 34; ++ i) fscanf(fin, "%d", &hand_cnt[i]); hand_cnt[34]=0;
    int known_remain_cnt[34]; for (int i = 0; i < 34; ++ i) fscanf(fin,"%d", &known_remain_cnt[i]);
    fclose(fin);
    fprintf(flog,"%d,\n", rest_num);

    for (int i = 0; i < 34; ++ i){fprintf(flog, "%3s, ", mname[i]);}
    fprintf(flog, "\n");
    for (int i = 0; i < 34; ++ i) fprintf(flog, "%d, ", hand_cnt[i]);
    fprintf(flog, "\n");
    for (int i = 0; i < 34; ++ i) fprintf(flog,"%d, ", known_remain_cnt[i]);
    fprintf(flog, "\n");
    for (int i = 0; i < 34; ++i) {
        for (int j = 0; j < hand_cnt[i]; ++j) fprintf(flog,"%3s, ", mname[i]);
    }
    fprintf(flog,"\n");

    int round = 18 - rest_num / 4;//start with 69 -> 1.end with 0 - 18.
    int choice = decide(hand_cnt, known_remain_cnt,round);
    fprintf(fout,"%d",choice);
    fprintf(flog,"%d ,",choice);
    fprintf(flog, "%3s\n", mname[choice]);
    fclose(fout);
    fclose(flog);

    return 0;
}