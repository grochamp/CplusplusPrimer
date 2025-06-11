#include <iostream>
#include <exception>
#include <string>
using namespace std;

//std exception

class CustomException : public exception
{
    public :
        const char * what() const noexcept
        {
            return "Custom excpetion";
        }
};


int main()
{

    try
    {

        //string s;
        //s.resize(-1);
        throw CustomException();
    }

catch(exception & exception)
{
    cout << typeid(exception).name() << endl;
    cerr << exception.what() << endl;//뭐가 문제인지 알려줌
}
}