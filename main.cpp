#include <iostream>
#include <string>
using namespace std;

void print(string str){}
void print(char ch =' '){}

//void print(int x = 99)//함수에 아무값도 안넣으면 default 99나옴. 오른쪽 값에 default없으면 왼쪽에 default값 넣을 수 없다
{
    cout << x << endl;

}




int main()
{
    print(10);
    print();
    return 0;
}