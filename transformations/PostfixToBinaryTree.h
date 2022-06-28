//
// Created by vitalieb on 6/28/22.
//

#ifndef DERIV_POSTFIXTOBINARYTREE_H
#define DERIV_POSTFIXTOBINARYTREE_H
#include <iostream>
#include "../utils/Node.h"

using namespace std;

class PostfixToBinaryTree {
public:
    static Node* transform(string postfix);
};


#endif //DERIV_POSTFIXTOBINARYTREE_H
