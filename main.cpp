#include <iostream>
#include "InfixToPostfix.h"

using namespace std;
int main() {
    string infix;
    cin>>infix;
    cout<<InfixToPostfix::transform(infix);
    return 0;
}
