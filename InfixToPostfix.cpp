//
// Created by vitalieb on 6/27/22.
//

#include <stack>
#include "InfixToPostfix.h"


int precedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}


string InfixToPostfix::transform(string infix) {
    stack<char> operators_stack;
    string postfix;

    for(char ch : infix){
        //if ch is operand
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch<='Z') || (ch >= '0' && ch <= '9'))
            postfix+=ch;
        //if ch is '(' push it to the stack
        else if(ch == '(')
                operators_stack.push(ch);
        //if ch is ')' pop and output operators until '(' is encountered'
        else if(ch == ')'){
            while(operators_stack.top()!='('){
                postfix+=operators_stack.top();
                operators_stack.pop();
            }
            //pop '(' from the stack
            operators_stack.pop();
        }
        //if ch is operator
        else{
            while(!operators_stack.empty() && precedence(ch)<= precedence(operators_stack.top())){
                //R-L associativity
                if(ch == '^' && operators_stack.top() == '^')
                    break;
                postfix += operators_stack.top();
                operators_stack.pop();
            }
            operators_stack.push(ch);
        }
    }

    //pop the remaining operators
    while(!operators_stack.empty()){
        postfix+=operators_stack.top();
        operators_stack.pop();
    }

    return postfix;
}
