#include <iostream>
using namespace std;

//함수 원형에는 함수명, 매게변수만 있으면 된다
void multiply(int x, int y);

void welcome(int, int);//리턴값 없는 함수
float number(int z);//리턴값 있는 함수

int main(){
//리턴값이 없는 함수 : void로 시작
//있는 함수 : typeName 알려야함



int a, b;
cout << "a값 ";
cin >> a;
cout << "b값 ";
cin >> b;
multiply(a, b);




    return 0;
}
void multiply(int x, int y) {
    cout << x*y << endl;
    
}