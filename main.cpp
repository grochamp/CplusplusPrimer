#include <iostream>
#include <bitset>
int main(){
using namespace std;

    unsigned int a = 3;
    unsigned int x = 0b1100;//2진수 표현볍 : 앞에 0b붙이기
    unsigned int y = 0b0110;

    cout << bitset <4>(a) << endl;//bitset : 2진수 자릿수

    unsigned int b = a << 2; //왼쪽으로 x을 옮기고 나머지 오른쪽은 비움(2의x승)
    cout << bitset<4>(b) << endl;

    cout << bitset<4>(x & y) << endl; //and : 둘다 1이면 1
    cout << bitset<4>(x | y) << endl; //or : 하나만 1이면 1
    cout << bitset<4>(x ^ y) << endl; //두 수 일치 안하는부분 : 1, 두수 같으면 :0


    return 0;
}