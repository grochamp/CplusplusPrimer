#include "Person.h"

class Teacher : public Person
{
    private:

    public:
        Teacher(const string & name_in = "No Name")
            : Person(name_in)
            {
                // this->getName()
            }
       
    friend ostream & operator << (ostream & out, const Teacher & Teacher)
    {
        out << Teacher.m_name;
        return out;

    }
};