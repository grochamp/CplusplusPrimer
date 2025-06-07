#include <iostream>
using namespace std;
int main(){

    // const int value = 5;//포인터 constant : 주소변경은 가능. 값은 못바꿈. 반대도 가능
    // int *ptr = &value;
    // *ptr = 6;
    // cout << *ptr << endl;

    int value1 = 5;
    const int *ptr = &value1;

    int value2 = 6;
    ptr = &value2;
    



    return 0;
}