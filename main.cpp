#include <iostream>
#include "MY_CONSTANTS.h"
using namespace std;

static int a=1;//전역변수는 삼가자, static은 타 cpp파일에서 참조 불가

extern void doSomething();//test.cpp파일의 함수 인식해서가져오기
extern int b;
// void doSomething(){

//     //static int a = 1; //static : 초기화를 맨 처음 정의할때만 하고 이후 안함. 그래서 늘음
//     ++a;
//     cout << a << endl;
// }

int value = 123;

int main(){
    doSomething();//test.cpp참조
    cout << Constants::pi << " " <<  &Constants::pi << endl;
    cout << b << endl;

    

// doSomething();
// doSomething();  //리턴값이없어서 2그대로임, static 쓰면 늘음

    cout << value << endl;

    int value = 111;
    cout <<::value << endl; //전역 참조
    cout << value << endl;

    return 0;
}