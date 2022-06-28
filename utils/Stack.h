//
// Created by vitalieb on 6/28/22.
//

#ifndef DERIV_STACK_H
#define DERIV_STACK_H


#include <iostream>
#include <cstdlib>
#include "Node.h"

using namespace std;

// default capacity of the stack
#define SIZE 50

class Stack
{
    Node **arr;
    int size;
    int capacity;

public:
    Stack();         // constructor
    ~Stack();        // destructor

    void push(Node*);
    Node* pop();
    Node* top();

    bool isEmpty();
};

#endif //DERIV_STACK_H
