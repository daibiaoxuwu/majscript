//
// Created by lm on 2019/11/7.
//

#include "Hu_Automation.h"
#include "Hu_Auto_Node.h"
#define READ_AUTOMATION 1
#include <bitset>
Hu_Automation::Hu_Automation() {
    node = new Hu_Auto_Node[MX];
#ifdef READ_AUTOMATION
    read_automation();
    for (int i = 1; i <= max_hu_value; ++i) {
        node[i].hu_value = i;
        //+debug
        for(int i2=0;i2<5;++i2){
            for(int j=0;j<Hu_Auto_Node::child_num;++j){
                assert(node[i].child[i2][j] == i);
            }
        }
        //-debug
    }
#else
    for (int i = 1; i <= max_hu_value; ++i) {
        node[i].hu_value = i;
        for(int i2=0;i2<5;++i2){
            for(int j=0;j<Hu_Auto_Node::child_num;++j){
                node[i].child[i2][j] = i;
            }
        }
        Hash[node[i]] = i;
    }
    Hash[node[max_hu_value+1]] = max_hu_value+1;
    for (int i = max_hu_value + 1; i <= tot; ++i) {
        expand(i);
    }
    printf("expand:%d\n", tot);
    compress_automation();
#endif
}

void Hu_Automation::expand(const int id) {
    for (int num = 0; num <= 4; ++num) {
        for (int piece = 0; piece <= 9; ++piece) {
            Hu_Auto_Node son = Hu_Auto_Node::add(node[id],piece,num);
            if (Hash.count(son)==0) {
                Hash[son] = ++tot;
                assert(tot < MX);
                node[tot] = son;
            }
            node[id].child[num][piece] = Hash[son];
        }
    }
}

void Hu_Automation::compress_automation() {
    auto *buf = new std::bitset<200000>[200000];
    //buf[big][small] true: can decifer

    for (int i = 2; i <= tot; ++i) {
        for (int j = 1; j <= min(i-1,max_hu_value); ++j) {
            buf[i][j] = true;
        }
    }
    bool flag = true;
    while (flag) {
        printf("looping\n");
        flag = false;
        for (int i = 2; i <= tot; ++i) {
            if(i%1000==0) printf("%d\n",i);
            for (int j = 1; j < i; ++j) {
                if (buf[i][j])continue;
                bool breakflag = true;
                for (int ci = 0; ci < 5 && breakflag; ++ci) {
                    for (int cj = 0; cj < Hu_Auto_Node::child_num; ++cj) {
                        int soni = node[i].child[ci][cj];
                        int sonj = node[j].child[ci][cj];
                        if (soni == sonj) continue;
                        if (soni < sonj) {
                            int temp = soni;
                            soni = sonj;
                            sonj = temp;
                        }
                        if (buf[soni][sonj]) {
                            flag = true;
                            buf[i][j] = true;
                            breakflag = false;
                            break;
                        }
                    }
                }
            }
        }
    }
    printf("complete\n");
    bool breakflag;
    int* pointer = new int[tot+1];// 3 equals 5: all refer to 5 should refer to 3
    int* pointer2 = new int[tot+1];// 6 reside in 5. compress space to eliminate those spaces.
    memset(pointer2,0,(tot+1)* sizeof(int));
    int pointer2_top = 0;
    int reduce_num = 0;
    for (int i = 1; i <= tot; ++i) {
        pointer[i] = i;
        for (int j = 1; j < i; ++j) {
            if(!buf[i][j]){ pointer[i]=j; ++reduce_num; break; }
        }
        if(pointer[i] == i) pointer2[i] = ++pointer2_top;
    }
    assert(tot-reduce_num==pointer2_top);
    printf("reduced to %d\n",tot-reduce_num);
    //+debug check
    for (int i = 1; i <= tot; ++i) {
        for (int j = pointer[i] + 1; j < i; ++j) {
            if(!buf[i][j]) assert(pointer[i]==pointer[j]);
        }
    }
    //-debug check
    FILE* fout = fopen("automation.txt", "w");
    breakflag = true;

    fprintf(fout,"%d\n",pointer2_top);
    for (int i = 1; i <= tot; ++i) {
        if(pointer[i]!=i)continue;
        for (int ci = 0; ci < 5; ++ci) {
            for (int cj = 0; cj < Hu_Auto_Node::child_num; ++cj) {
                node[i].child[ci][cj] = pointer2[pointer[node[i].child[ci][cj]]];
                fprintf(fout,"%d ",node[i].child[ci][cj]);
            }
        }
    }
    fclose(fout);
    //+debug
    FILE* fin = fopen("automation.txt", "r");
    int stot; fscanf(fin,"%d",&stot);
    int newtop = 1;
    for(int i = 1; i <= stot; ++i){
        for (int ci = 0; ci < 5; ++ci) {
            for (int cj = 0; cj < Hu_Auto_Node::child_num; ++cj) {
                int temp;
                fscanf(fin, "%d", &temp);
                assert(temp == node[newtop].child[ci][cj]);
            }
        }
        ++newtop;
        while(pointer[newtop]!=newtop && newtop <= tot)++newtop;
//            printf("%d\n",newtop);
    }
    printf("success!\n");
    //-debug
    fclose(fin);
}

void Hu_Automation::read_automation() {
    FILE* fin = fopen("automation.txt", "r");
    fscanf(fin,"%d",&tot);
    assert(tot<MX);
    int newtop = 1;
    for(int i = 1; i <= tot; ++i){
        for (int ci = 0; ci < 5; ++ci) {
            for (int cj = 0; cj < Hu_Auto_Node::child_num; ++cj) {
                fscanf(fin, "%d", &node[i].child[ci][cj]);
            }
        }
    }
    fclose(fin);
}
