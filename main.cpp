#include <iostream>
using namespace std;
int main(){

    float a;

    cout << sizeof(a) << endl;
    cout << sizeof(float)<< endl;//size of는 연산자

int x =3;
int y = 5;
int z = (++x, ++y);//특이하게 ++x, ++y, ++y 값을 반환함. 괄호를 한 경우만
cout << x << " " << y << " " << z;

//조건부연산자. 복잡한 환경에선 쓰지마라
bool onSale = true;
const int price = (onSale == true)? 10:100;

// if (onSale)
// price = 10;
// else
// price =100;
cout << price << endl;

    return 0;

}