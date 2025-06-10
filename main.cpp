#pragma once
#include <iostream>
#include <assert.h>
using namespace std;

template<typename T>
class MyArray
{
    private:
        int m_length;
        T *m_data;

    public :
        MyArray()
        {

            m_length = 0;
            m_data = nullptr;
        }
        MyArray(int length)
        {

            m_data = new T[length]; // 동적 배열은 반드시 delete[] 로 해제 해야함
            m_length = length;
        }

        ~MyArray()
        {
            reset();
        }

        void reset()
        {
            delete[] m_data;
            m_data = nullptr;
            m_length = 0;
        }

        T & operator[](int index)
        {
            assert(index >= 0 && index < m_length);
            return m_data[index];
        }

        int getLength()
        {
            return m_length;
        }

        void print()
        {
            for (int i = 0; i < m_length; ++i)
                cout << m_data[i] << " ";
                cout << endl;
        }


    };

int main()
{
    MyArray<double> my_array(10);
    for (int i = 0; i < my_array.getLength(); ++i)
        my_array[i]= i * 10;

    my_array.print();

    return 0;


}