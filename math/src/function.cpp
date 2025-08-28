#include "funcdef.hpp"
#include <cmath>
#include <iostream>

using namespace std;

float calc(float n1, float n2, char op){
    switch(op){
    case '+':
        return n1 + n2;
    case '-':
        return n1 - n2;
    case '*':
        return n1 * n2;
    case '/':
        if(n2 != 0){
            return n1 / n2;
        }
        else{
            cout << "Number 2 cannot be 0." << endl;
            return 0;
        }
    case '%':
        if(n2 != 0){
            return static_cast<int>(n1) % static_cast<int>(n2);
        }
        else{
            cout << "Number 2 cannot be 0." << endl;
            return 0;
        }
    case '^':
        return pow(n1, n2);
    default:
        cout << "Invaild operator; Either not an actual operator or not a case in switch statement." << endl;
        return 0;
    }
}
