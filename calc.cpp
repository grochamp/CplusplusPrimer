#include <iostream>
#include "Calc.h"
    Calc::Calc(int intit_value)
    : m_value(intit_value){}
    Calc& Calc::add(int value)
    {m_value += value; return *this;}
    Calc& Calc::sub(int value) {m_value -= value; return *this;}
    Calc& Calc::mult(int value) {m_value *= value; return *this;}
    void Calc::print()
        {
            std::cout << m_value << std::endl;
        }