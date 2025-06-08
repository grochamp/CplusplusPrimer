#include <iostream>
using namespace std;

class A
{
    public:
    int m_value;

    A(const int& input)
    :m_value(input)
        {
            cout << " Constructor" << endl;
        }
    
    ~A()
    {
        cout << "Destructor" << endl;
    }

    void print()
    {
        cout << m_value << endl;
    }
};
int main()
{


    A a(1);
    a.print();


    return 0;
}