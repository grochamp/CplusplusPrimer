#include <iostream>
#include <assert>
using namespace std;

class IntList
{

private:
    int m_list[10];

public:
    int & operator [](const int index)
    {
        assert(index >= 0);
        assert(index < 10);//범위값 제한


        return m_list[index];

    }


    void setItem(int index, int value)
    {
        m_list[index] = value;
    }

    int getItem(int index)
    {
        return m_list[index];
    }

    int * getList()
    {
        return m_list;
    }
};

int main()
{
    IntList mylist;
    mylist[3] = 99;
    cout << mylist[3] << endl;

/*
    IntList my_list;
    my_list.setItem(3 ,1);
    cout << my_list.getItem(3) << endl;
    my_list.getList()[3]= 100;
    cout << my_list.getList()[3] << endl;
*/
    return 0;
}
