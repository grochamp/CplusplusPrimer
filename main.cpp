#include <iostream>
#include <array>
//#include "Storage8.h"

using namespace std;

template<typename T>
class A
{
    public:
         void doSomething()
         {
            cout << typeid(T).name() << endl; //매개변수 T의 타입 이름 출력
         }


         void test()
         {}
};

template<>
class A<char>
{
    public :
    void doSomething()
    {
        cout << "ITISCHARSPECIALIZATION" << endl;
    }
};



int main()
{
    A<int> a_int;
    A<double> a_double;
    A<char> a_char;

    a_int.doSomething();
    a_double.doSomething();
    a_char.doSomething();
}