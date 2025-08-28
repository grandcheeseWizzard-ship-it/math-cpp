#include <iostream>
#include <cstdlib>
#include "funcdef.hpp"

using namespace std;

int main(int argc, char* argv[])
{
    if(argc !=4){
        cout << "Missing Argument; required arguments are in order of: Number 1, Number 2, Operator." << endl;
    }
    else{
        float n1 = atof(argv[1]);
        float n2 = atof(argv[2]);
        char op = argv[3][0];

        cout << calc(n1, n2, op) << endl;
    }
    return 0;
}

