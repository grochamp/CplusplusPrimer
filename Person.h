#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person
{
    protected:
        string m_name;
    public:
        Person(const string & name_in = "No Name")
            : m_name(name_in)
        {}
    void setName(const string & name_in)
    {
        m_name = name_in;
    }
    string getName()
    {
        return m_name;
    }
};