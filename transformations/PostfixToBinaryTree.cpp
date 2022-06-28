//
// Created by vitalieb on 6/28/22.
//

#include "PostfixToBinaryTree.h"
#include "../utils/Stack.h"
#include "../utils/ExpUtils.h"

Node *PostfixToBinaryTree::transform(string postfix) {
    Stack nodeStack;
    string temp;
    for(int i=0; postfix[i]!=NULL; i++){
        temp.clear();
        temp+=postfix[i];
        Node *node = new Node(temp);
        if(ExpUtils::isOperator(temp)){
            Node *right=nodeStack.pop();
            Node *left= nodeStack.pop();
            node->left=left;
            node->right=right;
            nodeStack.push(node);
        }
        else //temp is operand
        {
            nodeStack.push(node);
        }
    }

    return nodeStack.top();
}
