#include <iostream>
#include "transformation/InfixToPostfix.h"
#include "utils/Node.h"
#include "transformation/PostfixToBinaryTree.h"

using namespace std;
int main() {
    string infix, postfix;
    cin>>infix;
    postfix=InfixToPostfix::transform(infix);
    Node *top= PostfixToBinaryTree::transform(postfix);
    cout<<top->value;
    return 0;
}
