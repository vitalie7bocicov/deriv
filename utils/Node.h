//
// Created by vitalieb on 6/28/22.
//

#ifndef DERIV_NODE_H
#define DERIV_NODE_H
#include <iostream>
using namespace std;

class Node {
public:
    Node();
    Node(const string &value);
    string value;
    Node* left;
    Node* right;
};

#endif //DERIV_NODE_H
