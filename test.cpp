#include <iostream>
#include "MY_CONSTANTS.h"
int b = 3;
void doSomething(){using namespace std;
    
    cout << "hello" << endl;
    cout << Constants::pi << " " << &Constants::pi << endl;
}