//
// Created by vitalieb on 6/28/22.
//

#include "ExpUtils.h"

bool ExpUtils::isOperator(string x) {
    if(x=="^" || x=="+" ||  x=="-" || x=="/" || x=="*")
        return true;
    return false;
}
