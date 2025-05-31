#include <iostream>
using namespace std;

int main(){


    //union : using various type of data is available. 단 동시출력은 같은 타입만 가능. 이전에 썼던 데이터타입 사라짐.
    union A{

        int unionint;
        float unionfloat;
        char unionchar;
    };
    A test;
    
    //union에서 마지막으로 저장된 값만 제대로 기억함. unionchar만 제대로 저장되었고 나머지는 이상한 값으로 저장됨
    test.unionfloat = 3.14;
    test.unionint = 1;
    test.unionchar = 'b';
    cout << test.unionfloat << endl;
    cout << test.unionchar << endl;
    cout << test.unionint << endl;
    

    //열거체 : 기호상수를 만드는 또다른 방법
    enum spectrum 
    {   blue, red, violet };
    spectrum v = violet;
    cout << v << endl;
    //blue는 0의 위치, red는 1의위치, violet은 2의 위치에 있기때문에 violet의 값 2가 나옴
    //열거자들끼리 산수 안됨
    float a = red;
    a = red+0.1;
    cout << a << endl;
    //값으로 설정해서 숫자와의 놀음은 가능하다

    return 0;

}