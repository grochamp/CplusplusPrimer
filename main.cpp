#include <iostream>
using namespace std;

int func()
{
    return 5;

}

int goo()
{

        return 19;
}

int main()
{
    int(*fcnptr)() = func(); //값
    cout << fcnptr() << endl; //주소
    fcnptr = goo;
    cout << fcnptr() << endl;

    //cout << func << endl;//함수주소

    return 0;
}