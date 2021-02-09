//
// Created by lm on 2019/11/7.
//

#include "Hu_Automation.h"
#include "Hu_Auto_Node.h"
#include <bitset>
Hu_Automation::Hu_Automation() {
    node = new Hu_Auto_Node[MX];
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
