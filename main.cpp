#include <iostream>
using namespace std;
int main()
{

    //구조체 : 여러 데이터형이 허영되는 데이터형의 집합, 배열은 같은 데이터형의 집합
    struct MyStruct{
        string nmae;
        string position;
        float height;
        float weight;


    };
    // B;
    MyStruct C[2] = {
        {"A", "B", 11, 13},
        {"B", "D", 3, 0}
    };
    cout << C[1].height << endl;

    MyStruct A = {
        "박지성", "미드필더", 177, 77
    };
    cout << A.position << endl;
    
    // B ={"","공격수"};
    

    // cout << B.position<<endl;
    // cout << B.height<<endl;


    return 0;
}