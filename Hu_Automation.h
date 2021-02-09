//
// Created by lm on 2019/11/7.
//

#ifndef CPPDP_HU_AUTOMATION_H
#define CPPDP_HU_AUTOMATION_H

#include <map>
#include <cassert>
#include "Hu_Auto_Node.h"

class Hu_Automation {
public:
    static const int MX = 16000;//expand:199837 reduced to 35097 removeseven:expand:78696 reduced to 15938
    static const int max_hu_value = 6;
    Hu_Auto_Node* node;
    int tot = max_hu_value + 1;
    Hu_Automation();
    void read_automation();
};


#endif //CPPDP_HU_AUTOMATION_H
