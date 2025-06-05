#include <iostream>
#include <limits>
using namespace std;
int main(){
    short s= 1; //2bytes*8bits = 16bits
    int i = 1;
    long l = 1;
    long long ll= 1;
    cout << sizeof(short) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    cout << numeric_limits<short>::max() << endl;
    cout << numeric_limits<short>::min() << endl;
  
    s = 32768;
    --s;
    cout << s << endl; // 32767까지는 제대로 표현함 근데 short범위를 넘어서서 32768이되면 오버플로우되서 역으로 음의값 -32768이 나옴
    i = 33;
    int y = 4;
    cout << i/y << endl; // int값으로 나누니까 몫만 8로나오고 나머지도 소수점도 안나옴
    return 0;
}