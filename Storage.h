#include <iostream>

template <class T>
class Storage
{
private :
    T m_value;

public :
    Storage(T value)
    {
        m_value = value;
    }

    ~Storage()
    {

    }

    void print()
    {
        std::cout << m_value << '\n';

    }

};

template<>
void Storage<double>::print()//특수화
{
    std::cout << "DOUBLE ";
    std::cout << std::scientific << m_value << '\n';
}