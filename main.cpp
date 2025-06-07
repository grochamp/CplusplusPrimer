#include <iostream>
using namespace std;


struct Something
{

    int v1;
    float v2;
};

struct Other
{

    Something st;
};






void doSomething(const int &n)
{
    cout << &n << endl;
    //n =10;//const 때문에 못바꿈
    cout << "In doSomething" << " " <<  n << endl;
}




int main(){
    Other ot;
    int &v1 = ot.st.v1;
    v1 = 1;
    int value = 5;
    int *const ptr = &value;
    int &ref =value;
    
    
    // int n = 5;

    // cout << n << endl;
    // cout << &n << endl;

    // doSomething(n);

    // cout << n << endl;


    // return 0;


}