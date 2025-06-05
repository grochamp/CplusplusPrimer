#include <iostream>
#include "MY_CONSTANTS.h"
using namespace std;
//const는 범위내에서만 작동
void printNumber(const int my_number) //parameter에 const 넣는경우 많음 
{
    cout << my_number << endl;//
}

int main(){

    printNumber(123);


double const gravity{ 9.8 };//定数 = constant
gravity == 1.2;

    const int my_const(123);// 컴파일할때 const되는 함수
    int numers;
    cin >> numers;

    const int special_number(numers);//런타임할때 const되는 함수 

    cout << constants::moon_gravity;

    return 0;
}