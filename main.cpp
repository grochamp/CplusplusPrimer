#include <iostream>
using namespace std;

int adding (int x, int y){
    return x + y;
}

int main(){

auto a = 123; //자료형 스스로 판단함
auto b = 3.14;
auto result = adding(1, 2);
cout << result << endl;//auto를 parameter type에는 사용 불가



    return 0;
}