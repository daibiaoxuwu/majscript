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

int decide(const int *_hand_cnts, const int *known_remain_cnt, const int *dora, int round) {
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
    //+debug
    for (int p = 0; p < branch_choice_num; ++p) {
        fprintf(flog, "\n%3s,%d", p == 0 ? "   " : mname[hand_choices[p - 1]], hand_cnts[hand_choices[p - 1]]);
        for (int j = 1; j <= Hu_Automation::max_hu_value; ++j) {
            fprintf(flog, "\n f[%d],", j);
            for (int i = 1; i <= 13; ++i) {
                fprintf(flog, "%llu,", f[p][34 & 1][i][j]);
            }
        }
    }
    //-debug

    double expectance[43] = {}, success[43] = {};
    int close_to_hu[43] = {};
    int close_to_hu_min = 100;
    for (int p = 1; p < branch_choice_num; ++p) {
        int card = hand_choices[p - 1];
        for (int nw = 34 & 1, i = 1; i <= 13; ++i) {
            //dora penalty
            int dora_count = 0, dora_penalty = 0;
            for (int j = 0; j < 34; ++j) { dora_count += dora[i]; }
            if (dora[card] >= hand_cnts[card]) dora_penalty = 1;

            //possibility of lasting to this round
            double prob =
                    (round_prob[min(i - 1 + round, 18)] - round_prob[min(i + round, 18)]) / round_prob[min(round, 18)];

            //expectance
            unsigned long long sum = 0, sum2 = 0;
            for (int j = 1; j <= Hu_Automation::max_hu_value; ++j) {
                sum += f[p][nw][i][j] * (j + 4 + (dora_count - dora_penalty) * 1);//dora value?
                sum2 += f[p][nw][i][j];
                if(j==1) sum/=2, sum2/=2;
            }

            if (sum > 0 && close_to_hu[card] == 0) close_to_hu[card] = i;
            if (sum > 0) close_to_hu_min = min(close_to_hu_min, i);
            expectance[p] += (sum * fact[i] * fact[remaining_cards - i] / fact[remaining_cards]) * prob;
            success[p] += (sum2 * fact[i] * fact[remaining_cards - i] / fact[remaining_cards]) * prob;
        }
        fprintf(flog, "%d %lf %lf\n", p, expectance[p], success[p]);
    }


    //find best
    assert(choice_num == branch_choice_num - 1);

    double max_exp = -100, suc = 0;
    int best_card = 0;
    int max_card_cnt = 0;
    for (int p = 1; p < branch_choice_num; ++p) {
        int card = hand_choices[p - 1];
        int card_cnt = 4 - (known_remain_cnt[card] + hand_cnts[card]);//cards on table
        if (expectance[p] > max_exp || (expectance[p] > max_exp-0.01 && card_cnt > max_card_cnt))
            max_exp = expectance[p], best_card = card, suc = success[p], max_card_cnt = card_cnt;
    }
    printf("%lf %lf %d ",max_exp,suc,close_to_hu[best_card]);
    if(suc < 0.01){
        printf("safe: ");
        int min_cnt = 5, hand_cnt = 0;
        for (int p = 1; p < branch_choice_num; ++p) {
            int card = hand_choices[p - 1];
            int cnt = hand_cnts[card] + known_remain_cnt[card];
            if(cnt < min_cnt || (cnt == min_cnt && hand_cnts[card] >= hand_cnt)) min_cnt = cnt, best_card = card, hand_cnt = hand_cnts[card];
        }
    }
    return best_card;
}
/*
    if(round <= 10 || (close_to_hu_min < 3 && round <= 15)) {
        double max_exp = -100, suc = 0;
        double max_exp_s = -100, suc_s = 0;
        int best_card = 0;
        int best_card_s = 0;
        for (int p = 1; p < branch_choice_num; ++p) {
            int card = hand_choices[p - 1];
            if (expectance[p] > max_exp) max_exp = expectance[p], best_card = card, suc = success[p];
            if (hand_cnts[card] + known_remain_cnt[card] >= 4) continue;
            if (expectance[p] > max_exp_s) max_exp_s = expectance[p], best_card_s = card, suc_s = success[p];
        }
        if(max_exp != max_exp_s){
            printf("danger:%3s, %lf, %lf, %d\n",mname[best_card], max_exp, suc, close_to_hu[best_card]);
            printf("safe:%3s, %lf, %lf, %d diff:%lf\n",mname[best_card_s], max_exp_s, suc, close_to_hu[best_card_s],max_exp - max_exp_s);
        }
        if(max_exp == max_exp_s) best_card = best_card_s;

        if(round <= 6 || (round <= 12 && close_to_hu_min <= 2)) printf("brute");
        else {
            if(close_to_hu[best_card_s] > close_to_hu[best_card])
                printf("regardless");
            else {
                printf("careful");
                if (max_exp_s > 0 && max_exp_s > max_exp - 0.05 && max_exp_s != max_exp) {
                    printf(":safer:%lf %lf:", max_exp, max_exp_s);
                    max_exp = max_exp_s, suc = suc_s, best_card = best_card_s;
                }
            }
        }
        printf(":%lf, %lf, %d\n",max_exp, suc, close_to_hu_min);
        if(round <= 8 || suc > 0.05) return best_card;
    }
    if(true) {
        //safe: never play new cards; fastest hu; stop playing when possibility too low
        double max_suc= -100, exp = 0;
        double max_suc_s = -100, exp_s = 0;
        int best_card = 0;
        int best_card_s = -1;
        for (int p = 1; p < branch_choice_num; ++p) {
            int card = hand_choices[p - 1];
            if (success[p] > max_suc) max_suc = success[p], best_card = card, exp = success[p];
            if (hand_cnts[card] + known_remain_cnt[card] >= 4) continue;
            if (success[p] > max_suc_s) max_suc_s = success[p], best_card_s = card, exp_s = success[p];
        }
        if(max_suc != max_suc_s){
            printf("danger:%3s, %lf, %lf, %d\n",mname[best_card], max_suc, exp, close_to_hu[best_card]);
            printf("safe:%3s, %lf, %lf, %d diff:%lf\n",mname[best_card_s], max_suc_s, exp_s, close_to_hu[best_card_s],max_suc - max_suc_s);
        }
        if(max_suc == max_suc_s) best_card = best_card_s;
        if(max_suc_s > 0 && max_suc_s > max_suc - 0.05 && max_suc_s != max_suc){
            printf("safer:%lf %lf\n",max_suc,max_suc_s);
            best_card = best_card_s, max_suc = max_suc_s, exp = exp_s;
        }
        if(max_suc > 0.05) {
            //continue playing cards
            printf("careful-fast:%lf, %lf, %d\n",max_suc,exp, close_to_hu);
            return best_card;
        }
        else {
            //stop playing
            int min_cnt = 5, hand_cnt = 0;
            for (int p = 1; p < branch_choice_num; ++p) {
                int card = hand_choices[p - 1];
                int cnt = hand_cnts[card] + known_remain_cnt[card];
                if(cnt < min_cnt || (cnt == min_cnt && hand_cnts[card] >= hand_cnt)) min_cnt = cnt, best_card = card, hand_cnt = hand_cnts[card];
            }
            printf("suc<0.05 playsafe:%lf, %lf, %d\n",max_suc,exp, close_to_hu);
            return best_card;
        }
    }
}
 */
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
    int dora[34]; for (int i = 0; i < 34; ++ i) fscanf(fin,"%d", &dora[i]);
    fclose(fin);
    fprintf(flog,"%d,\n", rest_num);

    for (int i = 0; i < 34; ++ i){fprintf(flog, "%3s, ", mname[i]);}
    fprintf(flog, "\n");
    for (int i = 0; i < 34; ++ i) fprintf(flog, "%d, ", hand_cnt[i]);
    fprintf(flog, "\n");
    for (int i = 0; i < 34; ++ i) fprintf(flog,"%d, ", known_remain_cnt[i]);
    fprintf(flog, "\n");
    for (int i = 0; i < 34; ++ i) fprintf(flog,"%d, ", dora[i]);
    fprintf(flog, "\n");
    for (int i = 0; i < 34; ++i) {
        for (int j = 0; j < hand_cnt[i]; ++j) {
            fprintf(flog, "%3s, ", mname[i]);
            printf("%3s, ", mname[i]);
        }
    }
    fprintf(flog,"\n");
    printf("\n");

    int round = 18 - rest_num / 4;//start with 69 -> 1.end with 0 - 18.
    int choice = decide(hand_cnt, known_remain_cnt,dora,round);
    fprintf(fout,"%d",choice);
    fprintf(flog,"%d ,",choice);
    fprintf(flog, "%3s\n", mname[choice]);
    printf("%3s\n", mname[choice]);
    fclose(fout);
    fclose(flog);

    return 0;
}
