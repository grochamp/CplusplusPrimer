#include <iostream>
#include <typeinfo>
using namespace std;

struct Something{


    int a, b, c;
};


int main(){

    int x = 5;

    int *ptr_x = &x, *ptr_y = &x;

    cout << typeid(ptr_x).name() << endl; //pi
//데이터 타입이랑 주소 상관없음
    cout << ptr_x << endl;//위치
    cout <<*ptr_x << endl;//역참조해서 다시 값
//포인터는 반드시 초기화해서 써라

    Something ss;
    Something *ptr_s;//Something의 포인터
    cout << sizeof(Something) << endl;
    cout << sizeof(ptr_s) << endl;




    /*
    int x = 5; // 변수 값
    cout << &x << endl; // x의 메모리 주소

    //de-reference operator(*) :직접접근

    cout << *&x << endl;


*/

    return 0;
}