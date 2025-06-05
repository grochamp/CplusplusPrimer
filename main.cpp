#include <iostream>

int main(){

    using namespace std;

    bool bValue = false;
    char chValue = 'A'; // 숫자 넣으면 그거에 해당하는 문자 나옴(ex 65넣으면 A나옴)
    auto aValue = "오토아포칼립스"; // auto : 지가 알아서 판단함
    cout << chValue << endl;
    cout << aValue << endl;
    // cout << (bValue ? 1:0) << endl;
    cout << sizeof(bool) << endl; //sizeof(x) : size of x
    int a(123); // direct initialization, 괄호안에는 int안에 소수점수를 넣어도 착해서 소수점만 버리고 인정해준다
    int b{ 123 }; // uniform initialization 얘는 엄격해서 소수점 넣어도 인정 안해준다
    int x=128,  y = 256;
    cout << x << " " << y << endl;
    return 0;
}

