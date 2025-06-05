#include <iostream>
using namespace std;
int apple = 5;//메모리를 차지하는곳은 한곳밖에없다. 정의는 한곳에서밖에 못한다
int a =199999;
namespace some{
void doSomething(){

    a += 3;
}}

namespace some1{
void doSomething(){

    a += 5;
}}

int main(){
    // cout << apple << endl;
    
    some::doSomething(); //함수 실행
    cout << a << endl; //함수의 a값 출력


    
    {apple = 3; //중괄호 내에선 바뀜
// cout << apple << endl;

    }

    return 0;
}