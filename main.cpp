#include <iostream>
using namespace std;


void doSomething(const int& x){

    cout << x << endl;
}
int main(){

    int a =1;
    doSomething(a);
    doSomething(1);
doSomething(1+a);
    // const int x =5;
    // const int &ref_x = x;
    // const int &ref_2 = ref_x;//const ref에는 literal 입력 가능
    return 0;
}