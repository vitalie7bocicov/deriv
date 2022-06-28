//
// Created by vitalieb on 6/28/22.
//

#include "Stack.h"


Stack::Stack()
{
    arr = new Node*[SIZE];
    capacity = SIZE;
    size = -1;
}


Stack::~Stack() {
    delete[] arr;
}

void Stack::push(Node *x)
{
    arr[++size] = x;
}

Node* Stack::pop()
{
    if (isEmpty())
    {
        return NULL;
    }
    // decrease stack size by 1 and return the popped element
    return arr[size--];
}

// Utility function to return the top element of the stack
Node* Stack::top()
{
    if (!isEmpty()) {
        return arr[size];
    }
    return NULL;
}

bool Stack::isEmpty() {
    return size == -1;
}
