#include<cstdio>
#include<cstring>
#include<map>
#include <ctime>
#include <vector>
#include <algorithm>

FILE* fin, *fout;
inline void maxer(int &x, int y) { if (y > x) x = y; }
inline int min(int a, int b) { return a < b ? a : b; }
inline int max(int a, int b) { return a > b ? a : b; }
const double round_prob[19] = {1.000000, 1.000000, 0.999708, 0.998029, 0.991947, 0.976532, 0.946340, 0.897968, 0.831425, 0.750198, 0.660036, 0.567684, 0.479381, 0.399071, 0.329266, 0.270215, 0.221551, 0.182120, 0.00000};
const long long C[5][5] = {{1}, {1, 1}, {1, 2, 1}, {1, 3, 3, 1}, {1, 4, 6, 4, 1}};
const char* mname[]={" 1m", " 2m", " 3m", " 4m", " 5m", " 6m", " 7m", " 8m", " 9m", " 1p", " 2p", " 3p", " 4p", " 5p", " 6p", " 7p", " 8p", " 9p", " 1s", " 2s", " 3s", " 4s", " 5s", " 6s", " 7s", " 8s", " 9s", "EST", "STH", "WST", "NTH", "BAI", " FA", "ZHO"};
const int f_len3 = 15, MX = 1000,MAX_HU_VALUE = 1,CHILD_NUM = 10;
unsigned long long f[2][16][f_len3][MX];
double sevenval[16][f_len3];
double fsum[16][4][2][6][f_len3];
int dppath[2][MX][5];
int dpface[2][MX][2];
double result_norm[f_len3][16];
double result_duan[f_len3][16];
double fact[136];
int tot[2];
int ting_t = 100, ting_d = 100;
double bestval = -1;
double purevals[34];
void seven(const int *hand_cnts, const int *known_remain_cnt,int p, int nw, int k){

    memset(sevenval,0,sizeof(double)*16*f_len3);
    int double_cnt = 0;
    for (int i = 0; i < 34; ++i) {
        if(hand_cnts[i]>=2) double_cnt++;
    }
    int remaining_cards = 0;
    for (int i = 0; i < 34; ++i) remaining_cards += known_remain_cnt[i];
    int hand_remain[5]={}, rest_remain[5]={};
    for (int i = 0; i < 34; ++i) {
        if(hand_cnts[i] == 1 || hand_cnts[i] == 3) {
            hand_remain[known_remain_cnt[i]]++;
        }else if(hand_cnts[i]==4){
            hand_remain[known_remain_cnt[i]]+=2;
        }else{
            rest_remain[known_remain_cnt[i]]++;
        }
    }
    auto* starter = new std::vector<int>();
    for (int j : hand_remain) starter->push_back(j);
    for (int j : rest_remain) starter->push_back(j);
    std::map<std::vector<int>, long long int> Hash[2];
    Hash[1][*starter] = 1;
    long long int penalty = 1;
    for (int j = 1; j <= min(remaining_cards, f_len3 - 5); ++j){
        int nw2 = j & 1;
        Hash[nw2 ^ 1].clear();
        for (const auto thisvec : Hash[nw2]) {
            if(thisvec.second == 0) continue;
            int mink;
            for (mink = 0; mink < 5 && thisvec.first[mink] == 0; ++mink);
            if(mink == 5) continue;
            //add a pair
            for (int i = 1; i < 5; ++i) {
                if(thisvec.first[i] == 0) continue;
                auto *newvec = new std::vector<int>();
                for (int k = 0; k < 10; ++k) newvec->push_back(thisvec.first[k]);
                (*newvec)[i] -= 1;
                (*newvec)[i + 5 - 1] += 1;

                int mink2;
                for (mink2 = 0; mink2 < 5 && (*newvec)[mink2] == 0; ++mink2);
                if(mink2 < 5) {
                    (*newvec)[mink2] -= 1;
                    (*newvec)[mink2 + 5] += 1;
                }

                int sum = 0;
                for (int k = 0; k < 5; ++k) sum += thisvec.first[k];

                if(sum <= 2){
                    sevenval[p][j] += i * thisvec.first[i] * thisvec.second;
                } else {
                    if (Hash[nw2 ^ 1].count(*newvec) == 0)
                        Hash[nw2 ^ 1][*newvec] = i * thisvec.first[i] * thisvec.second;
                    else
                        Hash[nw2 ^ 1][*newvec] += i * thisvec.first[i] * thisvec.second;
                }
            }
            //add better hands
            for (int i = 1; i <= mink; ++i) {
                if(thisvec.first[i + 5] <= 0) continue;
                auto *newvec = new std::vector<int>();
                for (int k = 0; k < 10; ++k) newvec->push_back(thisvec.first[k]);
                (*newvec)[i + 5] -= 1;
                (*newvec)[i + 5 - 1] += 1;
                if(Hash[nw2 ^ 1].count(*newvec) == 0) {
                    Hash[nw2 ^ 1][*newvec] = thisvec.first[i + 5] * i * thisvec.second;
                } else {
                    Hash[nw2 ^ 1][*newvec] += thisvec.first[i + 5] * i * thisvec.second;
                }
            }

            for (int i = mink + 1; i < 5; ++i) {
                if(thisvec.first[i + 5] <= 0) continue;
                auto *newvec = new std::vector<int>();
                for (int r = 0; r < 10; ++r) newvec->push_back(thisvec.first[r]);
                (*newvec)[i + 5] -= 1;
                (*newvec)[i - 1] += 1;
                (*newvec)[mink + 5] += 1;
                (*newvec)[mink] -= 1;

                if(Hash[nw2 ^ 1].count(*newvec) == 0){
                    Hash[nw2 ^ 1][*newvec] = thisvec.first[i + 5] * i * thisvec.second;
                } else {
                    Hash[nw2 ^ 1][*newvec] += thisvec.first[i + 5] * i * thisvec.second;
                }
            }
        }
        penalty *= j;
    }
}


//maxf 需要构成的面子数量
void norm(const int *hand_cnts, const int *known_remain_cnt, const int *dora, int round, double result[][16], int state, int maxf, int duanflag) {
    int maxs = 4;//需要考虑所有4个花色
    int remaining_cards = 0; for (int i = 0; i < 34; ++i) remaining_cards += known_remain_cnt[i];//未见余牌总数

    int op = 0;
    memset(fsum,0,sizeof(double)*f_len3*16*4*2*6);
    for (int s = 0; s < maxs; ++s) {//s: 花色 s=3为字
        int branch_choice_num = 1; //分支数量，为同时分析打出各个牌后的牌效，在每张牌处进行分支
        int dpf = (s == 3 ? 1 : 0); //

        //dp:initialize
        memset(f, 0, sizeof(long long int) * 2 * 16 * f_len3 * MX);
        f[0][0][0][2] = 1;

        //dp
        for (int i = 1; i <= (s == 3 ? 7 : 9); ++i) {
            int nw = i & 1; //迭代中交替使用的flag f[nw]为这一代 f[1-nw]为上一代

            memset(f[nw], 0, sizeof(long long int) * 16 * f_len3 * MX);
            for (int p = 0; p <= branch_choice_num; ++p) {
                for (int j = min(remaining_cards, f_len3 - 5); j >= 0; --j) {
                    for (int k = 1; k <= tot[dpf]; ++k) {
                        if ((p == branch_choice_num && hand_cnts[s * 9 + i - 1] > 0) ||
                            f[nw ^ 1][p][j][k] > 0) {
                            if(duanflag && (i == 1 || i == 9 || s == 3)){
                                if (p < branch_choice_num) {
                                    f[nw][p][j][dppath[dpf][k][0]] += f[nw ^ 1][p][j][k];
                                }
                                if (p == branch_choice_num) {
                                    f[nw][p][j][dppath[dpf][k][0]] += f[nw ^ 1][0][j][k];
                                }
                            } else {
                                for (int t = known_remain_cnt[s * 9 + i - 1]; t >= 0; --t) {
                                    int thishand = hand_cnts[s * 9 + i - 1] + t;
                                    if (p < branch_choice_num) {
                                        f[nw][p][j + t][dppath[dpf][k][thishand]] += f[nw ^ 1][p][j][k] * C[known_remain_cnt[s * 9 + i - 1]][t];
                                    }
                                    if (p == branch_choice_num) {
                                        f[nw][p][j + t][dppath[dpf][k][thishand - 1]] += f[nw ^ 1][0][j][k] * C[known_remain_cnt[s * 9 + i - 1]][t];
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (hand_cnts[s * 9 + i - 1] > 0) {
                ++branch_choice_num;
            }
        }
        int nw = 9 & 1;   // 9 & 1 == 7 & 1
        for (int p = 0; p < branch_choice_num; ++p) {
            for (int t = 0; t < f_len3 - 5; ++t)
                for (int k = 1; k <= tot[dpf]; ++k)
                    for (int i = 0; i < 2; ++i)
                        fsum[(p == 0 ? 0 : p + op)][s][i][dpface[dpf][k][i]][t] += (double) f[nw][p][t][k];

        }
        op += (branch_choice_num - 1);
    }
    int p = 1;
    for (int n = 0; n < 35; ++n) {
        if(n==34)n=100;
        if (hand_cnts[n] == 0)continue;
        int m[4], t[4];
        for (m[0] = 0; m[0] <= 4; ++m[0]) {
            for (t[0] = 0; t[0] < f_len3 - 5; ++t[0]) {
                for (m[1] = 0; m[1] <= 4; ++m[1]) {
                    for (t[1] = 0; t[1] + t[0] < f_len3 - 5; ++t[1]) {
                        for (m[2] = 0; m[2] <= 4; ++m[2]) {
                            for (t[2] = 0; t[2] + t[1] + t[0] < f_len3 - 5; ++t[2]) {
                                for (m[3] = max(0, maxf - m[0] - m[1] - m[2]); m[3] <= 4; ++m[3]) {
                                    for (t[3] = 0; t[3] + t[2] + t[1] + t[0] < f_len3 - 5; ++t[3]) {
                                        //one qt
                                        if(maxs >= 1)
                                        for (int qt = 0; qt < (state == 2 && maxf < 4 ? 3 : 4); ++qt) { //TODO qt=3
                                            double res = 1;
                                            for (int s = 0; s < maxs; ++s) {
                                                res *= fsum[(n / 9 == s ? p : 0)][s][s == qt ? 1 : 0][m[s] + 1][t[s]];
                                            }
                                            result[t[0] + t[1] + t[2] + t[3]][p] += res;
                                        }
                                        //minus two qt
                                        if(maxs >= 2)
                                        for (int qt2 = 0; qt2 < maxs - 1; ++qt2) {
                                            for (int qt3 = qt2 + 1; qt3 < maxs; ++qt3) {
                                                double res = 1;
                                                for (int s = 0; s < maxs; ++s)
                                                    res *= fsum[(n / 9 == s ? p : 0)][s][s == qt2 || s == qt3 ? 1 : 0][
                                                            m[s] + 1][t[s]];
                                                result[t[0] + t[1] + t[2] + t[3]][p] -= res;
                                            }
                                        }
                                        //plus three qt
                                        if(maxs >= 3)
                                        for (int qt2 = 0; qt2 < maxs; ++qt2) {
                                            double res = 1;
                                            for (int s = 0; s < maxs; ++s) {
                                                res *= fsum[(n / 9 == s ? p : 0)][s][s == qt2 ? 0 : 1][m[s] + 1][t[s]];
                                            }
                                            result[t[0] + t[1] + t[2] + t[3]][p] += res;
                                        }

                                        if(state != 2 || maxf == 4) {
                                            //minus four qt
                                            double res = 1;
                                            if (maxs >= 4)
                                                for (int s = 0; s < maxs; ++s) {
                                                    res *= fsum[(n / 9 == s ? p : 0)][s][1][m[s] + 1][t[s]];
                                                }
                                            result[t[0] + t[1] + t[2] + t[3]][p] -= res;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        ++p;
    }
}

//state: 0: menqing
//1: no yipai, just duanyao
//2: have yipai
int decide(const int *_hand_cnts, const int *known_remain_cnt, const int *dora, int round, int state, int maxf, const int* yi, const int safecards[][34], const int* playerliqi) {
    int hand_cnts[101];
    memcpy(hand_cnts, _hand_cnts, 35 * sizeof(int));
    hand_cnts[100]=1;
    int remaining_cards = 0;
    for (int i = 0; i < 34; ++i) remaining_cards += known_remain_cnt[i];
    int remaining_cards2 = 0;
    for (int i = 0; i < 34; ++i) {
        if(i == 0 || i == 8 || i == 9 || i == 17 || i == 18 || i >= 26)continue;
        remaining_cards2 += known_remain_cnt[i];
    }
//    remaining_cards2 = (remaining_cards2+remaining_cards)/2;
//    printf("%d %d\n",remaining_cards,remaining_cards2);

    memset(result_norm, 0, sizeof(double)*f_len3*16);
    memset(result_duan, 0, sizeof(double)*f_len3*16);
    if(state != 1)
        norm(hand_cnts, known_remain_cnt, dora, round, result_norm, state, maxf, 0);
    int p = 1;
    for (int l = 0; l < 34; ++l) if (hand_cnts[l] != 0)++p;
    for (int t = 0; t < f_len3 - 5; ++t) {
        if (result_norm[t][p] > 0) ting_t = min(ting_t, t);
    }
    if(state < 2 && (state != 0 || ting_t > 2)) {
        norm(hand_cnts, known_remain_cnt, dora, round, result_duan, state, maxf, 1);
    }

    for (int t = 0; t < f_len3 - 5; ++t) {
        if (result_duan[t][p] > 0) ting_d = min(ting_d, t);
    }
//    printf("%d %d\n",ting_t,ting_d);
    if(ting_t == 100)ting_t = ting_d;
    if(ting_d == 100)ting_d = ting_t;
//    printf("%d %d\n",ting_t,ting_d);

    double ting_bval = 0; int ting_card = -1;
    double ting_vals[34];
    p = 1;
    std::vector<std::pair<double, int>> vals;
    for (int l = 0; l < 34; ++l) {
        if(hand_cnts[l]==0)continue;
        int this_tingt = 100;
        double val0 = 0;
        double val = 0;
        double prob = 0;
        double prob0 = 0;
        for (int t = 0; t < f_len3 - 5; ++t) {
            double prob2 = result_norm[t][p] * fact[t] * fact[remaining_cards - t] / fact[remaining_cards];
            double prob3 = result_duan[t][p] * fact[t] * fact[remaining_cards2 - t] / fact[remaining_cards2];
//            printf("%.3lf %.3lf ",prob2, prob3);
            if (result_norm[t][p] > 0 || result_duan[t][p] > 0) this_tingt = min(this_tingt, t);
            val += round_prob[min(t + round, 18)] / round_prob[min(round, 17)] * (prob2 - prob);
            val0 += round_prob[min(t + round, 18)] / round_prob[min(round, 17)] * (prob2 + prob3 - prob0);
            prob = prob2;
            prob0 = prob2 + prob3;
        }

//        printf("%3s %lf %lf\n", mname[l], val, val0);
        ting_vals[l] = result_norm[1][p];

        //seven
        if(maxf == 4 && state == 0) {
            int nw = 1;
            hand_cnts[l]--;
            seven(hand_cnts, known_remain_cnt, p, nw, 2);
            hand_cnts[l]++;
            double val2 = 0;
            prob = 0;
            for (int t = 0; t < f_len3 - 5; ++t) {
                double prob2 = sevenval[p][t] * fact[remaining_cards - t] / fact[remaining_cards];
                if(sevenval[p][t] > 0) ting_t = min(ting_t, t), this_tingt = min(this_tingt, t);
                val2 += (sevenval[p][2]>0 ? 10 : 4) * round_prob[min(t + round, 18)] / round_prob[min(round, 17)] *
                        (prob2 - prob);//seven multiply by 2
                prob = prob2;
            }
//            printf("%3s %lf %lf\n", mname[l], val, val2);
            val0 += val2;
            ting_vals[l] += sevenval[p][1];
        }

        val0 *= (this_tingt <= 1 ? 1.35 : this_tingt == 2 ? 1.15 : 1);

        //dora
        int dora_count = 0, dora_penalty = 0;
        for (int j = 0; j < 34; ++j) { dora_count += dora[j]; }
        double adjust = 0;
        if (hand_cnts[l]<4 && (dora[l] >= hand_cnts[l])) {
            if (!(l == 0 || l == 8 || l == 9 || l == 17 || l == 18 || l >= 26)) {
                adjust = 0.15;
                ting_vals[l] *= 0.6;
                //           val0 *= (l != 0 && l != 8 && l != 9 && l != 17 && l != 18 && l < 26) && state == 0 ? (ting_t<=1 ? 0.99 : ting_t <= 2 ? 0.98 : 0.9) : (ting_t<=1 ? 0.99 : ting_t <= 2 ? 0.95 : 0.85), ting_vals[l] *= 0.6;
                if (l >= 27 && hand_cnts[l] <= 1) adjust *= 0.7;
            }
            else {
                if (state != 1) {
                    //only one-ning
                    if (!(state == 0 &&
                          hand_cnts[0] + hand_cnts[8] + hand_cnts[9] + hand_cnts[17] + hand_cnts[18] +
                          hand_cnts[26] + hand_cnts[27] + hand_cnts[28] + hand_cnts[29] + hand_cnts[30] +
                          hand_cnts[31] + hand_cnts[32] + hand_cnts[33] <= 1)) {
                        adjust = 0.15;
                        ting_vals[l] *= 0.6;
                        if (l >= 27 && hand_cnts[l] <= 1) adjust *= 0.7;
                    }
                }
            }
        }
        val0 *= (1-adjust);
        //liqi safe
        adjust = 1;
        for (int i = 0; i < 4; ++i) {
            if(playerliqi[i]==0)continue;
            if(safecards[i][l] == 1) continue;
            if(l>=27) {
                if (hand_cnts[l] + known_remain_cnt[l] == 2) adjust *= 0.7;
                if (hand_cnts[l] + known_remain_cnt[l] == 1) adjust *= 0.5;
            }else{
                int l2 = l % 9, l3 = l - l2;
                int l4 = (l2 < 5 ? -1 : 1);
                int walls = 0;
                if(l2 < 3 || safecards[i][l - 3] || known_remain_cnt[l-1] == 0 || known_remain_cnt[l-2]==0)walls+=3;
                else if( known_remain_cnt[l-1] == 1 || known_remain_cnt[l-2]==1)walls+=1;
                if(l2 >= 6 || safecards[i][l + 3] || known_remain_cnt[l+1] == 0 || known_remain_cnt[l+2]==0)walls+=3;
                else if( known_remain_cnt[l+1] == 1 || known_remain_cnt[l+2]==1)walls+=1;
//                printf("%s %d\n",mname[l],walls);
                if(walls == 6)adjust *= 0.98;
                if(walls == 4)adjust *= 0.95;
                if(walls == 2)adjust *= 0.7;
                if(walls == 3)adjust *= 0.3;
                if(walls == 1)adjust *= 0.2;
                if(walls == 0)adjust *= 0.1;
            }
        }
        if(ting_t <= 1 || ting_d <= 1)adjust = 1-(1-adjust)*0.6;
        if(hand_cnts[l]<4 && (dora[l] >= hand_cnts[l])) adjust = 1-(1-adjust)*4;
        val0 *= adjust;
        if(state == 0 && ting_t > 3 && yi[l] > 0 && hand_cnts[l]+known_remain_cnt[l]>=3) val0 *= (1-0.07*hand_cnts[l]*hand_cnts[l]-(hand_cnts[l]+known_remain_cnt[l] == 4 ? 0.05 : 0));
        if(ting_vals[l] > ting_bval) ting_bval = ting_vals[l],ting_card = l;

        vals.emplace_back(std::make_pair(val0,l));
        purevals[l] = val;
        p++;
    }
    std::sort(vals.begin(),vals.end(),std::greater<>());
    if(state == 2 && hand_cnts[vals[0].second] >= 2 && yi[vals[0].second] > 0 ) vals[0].first = vals[1].first,vals[0].second=vals[1].second;
    if(vals[0].first > 0)
    {
        for (auto i : vals){
//            printf("%s %lf %lf\n",mname[i.second],i.first,ting_vals[i.second]);
        }
        if(ting_vals[vals[0].second] > 0 && ting_card != -1) {
            bestval = ting_bval;
            return ting_card;
        }
        bestval = vals[0].first;
        if(state != 1)bestval = purevals[vals[0].second];
        return vals[0].second;
    } else return -1;
}





int main( int argc, char** argv ) {
    clock_t start = clock();

    fact[0] = 1;
    for (int i = 1; i <= 136; ++i) fact[i] = fact[i - 1] * i;

    //now no hu node 1, start from 2, 0 and 1 are useless, start from 1
    FILE* fdp = fopen("automation79.txt", "r");
    for (int k = 0; k < 2; ++k) {
        fscanf(fdp, "%d", &tot[k]);
        for (int i = 1; i <= tot[k]; ++i) {
            for (int ci = 0; ci < 5; ++ci) {
                fscanf(fdp, "%d", &dppath[k][i][ci]);
            }
            fscanf(fdp, "%d", &dpface[k][i][0]);
            fscanf(fdp, "%d", &dpface[k][i][1]);
        }
    }
    fclose(fdp);

    fin = fopen((argc == 1 ? "input.txt" : argv[1]), "r");

    time_t rawtime;
    struct tm * timeinfo;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );

    bool inputErrorFlag = false;
    bool inputErrorFlag2 = false;
    int rest_num; fscanf(fin,"%d", &rest_num);
    int state; fscanf(fin,"%d", &state);
    int maxf; fscanf(fin,"%d", &maxf);
    int hand_cnt[35]; for (int i = 0; i < 34; ++ i) {
        fscanf(fin, "%d", &hand_cnt[i]);
        if(hand_cnt[i]<0){printf("%3s %d",mname[i],hand_cnt[i]);hand_cnt[i] = 0;inputErrorFlag=true;}
    }
    if(inputErrorFlag==true)printf("hand input < 0!\n");
    hand_cnt[34] = 0;
    int known_remain_cnt[34]; for (int i = 0; i < 34; ++ i){
        fscanf(fin,"%d", &known_remain_cnt[i]);
        if(known_remain_cnt[i]<0){printf("%3s %d",mname[i],known_remain_cnt[i]);known_remain_cnt[i] = 0;inputErrorFlag2=true;}
    }
    if(inputErrorFlag2==true)printf("remain input < 0!\n");
    int dora[34]; for (int i = 0; i < 34; ++ i) fscanf(fin,"%d", &dora[i]);
    int yi[34];for (int i = 0; i < 34; ++ i) fscanf(fin,"%d", &yi[i]);
    int safecards[4][34]; for (int j = 0; j < 4; ++j) for (int i = 0; i < 34; ++ i) fscanf(fin,"%d", &safecards[j][i]);
    int playerliqi[4]; for (int l = 0; l < 4; ++l)fscanf(fin,"%d", &playerliqi[l]);
    fclose(fin);
    if(inputErrorFlag || inputErrorFlag2){
        FILE* flog = fopen("log.txt","a");
        fprintf(flog,"%d %d %d\n",rest_num,state,maxf);
        for (int i = 0; i < 34; ++i) fprintf(flog, "%d ",hand_cnt[i]);
        fprintf(flog,"\n");
        for (int i = 0; i < 34; ++i) fprintf(flog, "%d ",known_remain_cnt[i]);
        fprintf(flog,"\n");
        for (int i = 0; i < 34; ++i) fprintf(flog, "%d ",dora[i]);
        fprintf(flog,"\n");
        for (int i = 0; i < 34; ++i) fprintf(flog, "%d ",yi[i]);
        fprintf(flog,"\n");
        fclose(flog);
    }

//    for (int j = 0; j < 34; ++j) {
//        if(yi[j]>0 && hand_cnt[j] == 2 && known_remain_cnt[j] > 0) hand_cnt[j]+=1;
//    }

//    for (int i = 0; i < 34; ++i) {
//        for (int j = 0; j < hand_cnt[i]; ++j) {
//            printf("%3s ", mname[i]);
//        }
//    }
//    printf("\n");

//    printf("wall: ");
//    for (int i = 0; i < 34; ++ i){if(known_remain_cnt[i] == 0) printf("%3s ", mname[i]);}
//    printf("\nchance: ");
//    for (int i = 0; i < 34; ++ i){if(known_remain_cnt[i] == 1) printf("%3s ", mname[i]);}
//    printf("\n");

    int round = 18 - rest_num / 4;//start with 69 -> 1.end with 0 - 18.
    int choice = decide(hand_cnt, known_remain_cnt, dora, round, state, maxf, yi, safecards, playerliqi);
    if (choice == -1) choice = decide(hand_cnt, known_remain_cnt, dora, round - 1, state, maxf, yi, safecards, playerliqi);
    if (choice == -1) choice = decide(hand_cnt, known_remain_cnt, dora, round - 2, state, maxf, yi, safecards, playerliqi);
//    if (choice != -1) printf("state:%d maxf:%d %s %d %lf\n\n",state,maxf, mname[choice],ting_t,bestval);
    fout = fopen("output.txt","w");
    fprintf(fout,"%d %d %d %lf",choice, ting_t,ting_d,bestval);
//    printf("%d %d %d %lf",choice, ting_t,ting_d,bestval);
    fclose(fout);
    return choice;
}
