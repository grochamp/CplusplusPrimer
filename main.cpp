#include <iostream>
using namespace std;

class Something
{
//스태틱은 이니셜라이즈 불가
    
    public:
    static int getValue()
    {
        return s_value;
    }
    int temp()
    {
        return this ->s_value;
    }
};

int Something::s_value = 1024;
//int Something::s_value = 1;//정적이라서 접근가능
int main()
{
    cout << Something::getValue() << endl;
    Something s1;
   
    cout << s1.getValue() << endl;
    //cout << &s1.s_value << endl;
    int(Something::*fptr1)()== &Something::temp;
    cout << (s2.*fptr1)() << endl;

    return 0;
}