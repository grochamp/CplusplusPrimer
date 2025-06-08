#include <iostream>
using namespace std;

class Calc
{
    private :
    int m_value;

    public:
        Calc(int init_value)
        : m_value(init_value)
        {}

        Calc& add(int value) {m_value += value; return *this;}
        Calc& sub(int value) {m_value -= value; return *this;}
        Calc& mult(int value) {m_value *= value; return *this;}
        
        
        void print()
        {
            cout << m_value << endl;
        }



};
int main()
{
    Calc cal(10);
    cal.add(5);
    cal.print();
    cal.add(10).sub(10).mult(100).print();//print는 왜 되냐

    return 0;
}