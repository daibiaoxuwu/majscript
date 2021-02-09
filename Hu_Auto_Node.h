//
// Created by lm on 2019/11/6.
//

#ifndef CPPDP_HU_AUTO_NODE_H
#define CPPDP_HU_AUTO_NODE_H


#include <cstring>
#include <cassert>

inline void maxer(int &x, int y) { if (y > x) x = y; }

inline int min(int a, int b) { return a < b ? a : b; }

inline int max(int a, int b) { return a > b ? a : b; }

class Hu_Auto_Node {
public:
    static const int hu_ways = 3;//0:common 1:ping 2:duan
    static const int child_num = 10;
    int hu_value = 0;//hu fan shu.
    int child[5][child_num];
private:
    int mat[2][3][3][hu_ways];//NOTE:0:nonexistant 1:0 group 5:hupai
    int seven = 0;
    bool is_Hu_oneway(int hu_way);
    bool is_Hu();
    void flush(Hu_Auto_Node pre, int quetou, int pre_quetou, int piece, int num);
public:
    Hu_Auto_Node();
    bool operator < (const Hu_Auto_Node &p) const;
    static Hu_Auto_Node add(Hu_Auto_Node A, int piece, int num);
};

#endif //CPPDP_HU_AUTO_NODE_H
