//
// Created by lm on 2019/11/7.
//

#ifndef CPPDP_HU_AUTOMATION_H
#define CPPDP_HU_AUTOMATION_H

#include <map>
#include <cassert>
#include "Hu_Auto_Node.h"

class Hu_Automation {
private:
//    static Hu_Automation* m_instance_ptr;
    std::map<Hu_Auto_Node, int> Hash;
    inline void expand(int id);
public:
    static const int MX = 36000;//expand:199837 reduced to 35097
    static const int max_hu_value = 6;
    Hu_Auto_Node* node;
    int tot = max_hu_value + 1;
    Hu_Automation();

    void compress_automation();
    void read_automation();
//    static Hu_Automation* HA(){
//        if(m_instance_ptr==nullptr){
//            m_instance_ptr = new Hu_Automation;
//        }
//        return m_instance_ptr;
//    }

};


#endif //CPPDP_HU_AUTOMATION_H
