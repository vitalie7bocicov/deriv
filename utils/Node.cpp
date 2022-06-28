//
// Created by vitalieb on 6/28/22.
//

#include "Node.h"

Node::Node(const string &value) : value(value) {
    left=NULL;
    right=NULL;
}

Node::Node(){
    left=NULL;
    right=NULL;
}
