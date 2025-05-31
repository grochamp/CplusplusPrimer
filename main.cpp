#include <iostream>
using namespace std;
int main()
{
    //포인터 : 사용할 주소에 이름붙이기
    // int* a, b; //a는 포인터 변수, b는 int형 변수
    int a = 7;
    int* b;
    b = &a;   // a의 주소를 &로 표현한다 

    cout <<b<<endl;
    cout <<&a<<endl; //두 값이 같게나옴
    cout << *b <<endl; //포인터의 값은 앞에 * 붙여서 표시함. b는 a의 포인터이므로 포인터 b의 값은 a의 값이다. 즉 7

    *b = *b+1;
    cout << *b << endl; 

    

    //new연산자 : 원하는 데이터형 알려주면 new연산자는 그에 알맞은 블록 주소을 알려줌
    
    //int* pointer = new int;
    
    //delete 연산자 : 사용한 메모리 다시 메모리 풀로 환수, 프로그램의 다른 부분이 다시 사용한다
    //new 사용 후에는 반드시 delete를 사용해야 한다. 안그러면 메모리 누수가 심각해진다
    
    //delete pointer;

    //new로 대입하지 않은 메모리는 delet로 해제 불가, 같은 메모리 블록 두번 연속 delete불가
    //대괄호로 new했으면 딜리트도 대괄호, 안썼으면 delete로 대괄 쓰지말기

    double* p2 = new double[3];
    p2[0] = 0.1;
    p2[1] = 0.01;
    p2[2] = 0.04;
    cout << p2[1] << endl;

    delete[] p2;
    return 0;




}