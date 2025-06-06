#include <iostream>
using namespace std;

void doSomething(double *ptr){
if( ptr != nullptr)
    {

        //do something useful
        cout << *ptr << endl;


    }
    else
    {
        //do nothing with ptr(null일 때)
        cout << "nothing" << endl;


    }

    
};


int main(){


    double *ptr = nullptr;

    doSomething(ptr);
    doSomething(nullptr);
    double d = 3.14;
    doSomething(&d);


    
return 0;}