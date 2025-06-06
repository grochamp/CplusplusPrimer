#include <iostream>
#include <cmath>
using namespace std;
int main(){

    goto skip;//순서가 말도안됨. goto는 돌아가는 방법임
    int x = 5;

skip:
    x +=3;

    return 0;
}