#include <iostream>
#include <cmath>
using namespace std;
int adding(int a, int b){
    return a+b;
}

int main(){
    int x = 6, y = 6;

    // cout << x << " " << y << endl;
    // cout << ++x << " " << ++y << endl;  //전처리 7 7 후 출력 : 7 7
    cout << x++ << " " << y++ << endl; //후처리 : 출력은 그대로 66하고 이후에 7 7 됨
    cout << x << " " << y << endl; 
    int a = 4;
    int b = adding(a, ++a); //쓰지마라. 위험하다. 값은 10이나온다.
    cout << b << endl;


    return 0;
}