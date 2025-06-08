#include <iostream>
using namespace std;

//벡터 내부에는 알아서 소멸해준다.
class IntArray
{
    private:
    int *m_arr = nullptr;
    int m_legnth = 0;

    public:
    IntArray(const int length_in)
    {
        m_legnth = length_in;
        m_arr = new int[m_legnth];
    }
    int size(){return m_legnth;}

    ~IntArray() //소멸
    {
        delete[] m_arr;

    }

};


class Simple
{
    private:
    int m_id;
    public:
    Simple(const int& id_in)
        : m_id(id_in)
        {
            cout << "Constructor" << m_id << endl;
        }
        ~Simple()
        {
            cout << "Destructor" << m_id << endl;
        }
};

int main()
{
    while (1)
    {
        IntArray my_int_arr(10000);
        
    }
    // Simple *s1= new Simple(0);
    // Simple s2(1);

    // delete s1;

    return 0;
}