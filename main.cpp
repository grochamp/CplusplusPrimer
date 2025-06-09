#include <iostream>
using namespace std;

class Base
{
    public:

        virtual void fun1() {};
        virtual void fun2() {};
};

class Der : public Base
{
    public:

        virtual void fun1() {};
        virtual void fun2() {};
};

int main()
{

    cout << sizeof(Base) << endl;
    cout << sizeof(Der) << endl;

    return 0;
}