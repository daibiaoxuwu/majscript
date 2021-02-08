//
// Created by lm on 2019/11/6.
//

#include "Hu_Auto_Node.h"


bool Hu_Auto_Node::operator < (const Hu_Auto_Node &p) const {
    if(hu_value != 0 || p.hu_value != 0) return (hu_value < p.hu_value);
    if(seven != p.seven) return seven < p.seven;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int r = 0; r < 3; ++r) {
                for (int k = 0; k < hu_ways; ++k) {
                    if(mat[i][j][r][k] != p.mat[i][j][r][k]) return (mat[i][j][r][k] < p.mat[i][j][r][k]);
                }
            }
        }
    }
    return false;
}

Hu_Auto_Node::Hu_Auto_Node() {
    for (int hu_way = 0; hu_way < hu_ways; ++hu_way) {
        mat[0][0][0][hu_way]=1;
    }
}

void Hu_Auto_Node::flush(const Hu_Auto_Node pre, int quetou, int pre_quetou, int piece, int num) {
    //+debug
    for (int test_quetou = 0; test_quetou < 2; ++test_quetou) {
        for (int hu_way = 0; hu_way < hu_ways; ++hu_way) {
            for (int hk = 0; hk < num; ++hk) {
                for (int hi = 0; hi < 3; ++hi) {
                    for (int hj = 0; hj < 3; ++hj) {
                        assert(pre.mat[test_quetou][max(0, hi - 1)][max(0, hj - 1)][hu_way] >=
                               pre.mat[test_quetou][hi][hj][hu_way]);
                    }
                }
            }
        }
    }
    //-debug
    bool isone = (piece==1 || piece==9);
    bool isonenine = (piece==1 || piece == 0 || piece==9);
    for (int hi = 0; hi <= (isone?0:2); ++hi) {
        for (int hj = 0; hj <= (isone?0:2); ++hj) {
            for (int hk = 0; hk < 3 && hi + hj + hk <= num; ++hk) {
                if (pre.mat[pre_quetou][hi][hj][0] != 0) {
                    maxer(mat[quetou][hj][hk][0],
                          min(hi + pre.mat[pre_quetou][hi][hj][0] + (num - hi - hj - hk) / 3, 5));
                }
                if (pre.mat[pre_quetou][hi][hj][1] != 0) {
                    maxer(mat[quetou][hj][hk][1], min(hi + pre.mat[pre_quetou][hi][hj][1], 5));
                }
                if (pre.mat[pre_quetou][hi][hj][2] != 0) {
                    if (!(isonenine && pre_quetou != quetou) && (!isonenine || hk == 0)) {
                        maxer(mat[quetou][hj][hk][2],
                              min(hi + pre.mat[pre_quetou][hi][hj][2] + (num - hi - hj - hk) / 3, 5));
                    }
                    if (pre.mat[pre_quetou][hi][hj][1] != 0) {
                        maxer(mat[quetou][hj][hk][1], min(hi + pre.mat[pre_quetou][hi][hj][1], 5));
                    }
                    if (pre.mat[pre_quetou][hi][hj][2] != 0) {
                        if (!(isonenine && pre_quetou != quetou) && (!isonenine || hk == 0)) {
                            maxer(mat[quetou][hj][hk][2],
                                  min(hi + pre.mat[pre_quetou][hi][hj][2] + (num - hi - hj - hk) / 3, 5));
                        }
                    }
                }
            }
        }
    }
}

bool Hu_Auto_Node::is_Hu_oneway(int hu_way) {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (mat[1][i][j][hu_way] >= 5) return true;
    return false;
}

bool Hu_Auto_Node::is_Hu() {
    if(hu_value > 0)return true;
    //hu_value = 0;
    if(is_Hu_oneway(0)) hu_value+=2;
    if(is_Hu_oneway(1)) hu_value+=2;
    if(is_Hu_oneway(2)) hu_value+=2;
    if(hu_value==0 && seven>=7) hu_value+=1;
    if(hu_value>0){
        for(int i=0;i<5;++i){
            for(int j=0;j<child_num;++j){
                child[i][j] = hu_value;
            }
        }
    }
    return hu_value>0;
}

Hu_Auto_Node Hu_Auto_Node::add(Hu_Auto_Node A, int piece, int num) {
    if (A.is_Hu()) return A;
    Hu_Auto_Node s;
    s.flush(A, 0, 0, piece, num);
    s.flush(A, 1,1, piece, num);
    if (num >= 2) s.flush(A, 1,0, piece, num - 2);
    s.seven = min(A.seven + (num >= 2),7);
    s.is_Hu();
    return s;
}


