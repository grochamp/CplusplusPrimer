#include <iostream>
using namespace std;

template <class NAME>//NAME이라는 템플릿 선언
NAME sum(NAME, char);//함수이름은 sum이고 매게변수는 int와 float

int main(){


int a=3;
char b='c';

cout << sum(a, b) << endl;   //<double>로 표현가능

    return 0;
}

template <class NAME>
NAME sum(NAME a , char b){
return a+b;

}