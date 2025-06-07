#include <iostream>
using namespace std;
int main(){

    int value = 5;

    int *ptr = nullptr;
    ptr = &value;

    int &ref = value;//ref는 반드시 초기화되어야한다. 단 literal이 아니라 변수를 넣어야함
    cout << ref << endl;
    ref = 10;
    cout << value << " " << ref << endl;
    cout << &ref << endl;
    cout << &value << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    // int x = 5;
    // int &ref = x;

    // const int y = 9;
    // const int &ref = y;

    int value1 = 5;
    int value2 = 10;
    int &ref1 = value1;

    cout << ref1 << endl;
    ref1 = value2;
    cout << ref1 << endl;




    return 0;
}