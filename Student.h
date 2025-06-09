#include "Person.h"

//중복되는건 다 부모로 보내자
class Student: public Person
{
    private:
        
        int m_intel;


    public:         //학생 = 컨스탄트했으니 &, default값 no name, intel 기본값 0
        Student(const string & name_in =  "No Name", const int & intel_in = 0)
          //  : m_name(name_in), m_intel(intel_in)
            :Person(name_in), m_intel(intel_in)  //name은 Person class에 시키고 intel은 지가함
          
          {}//코드블록
        
        
        void setIntel(const int & intel_in)
        {
            m_intel = intel_in;
        }
        int getIntel()
        {
            return m_intel;
        }

        friend ostream & operator << (ostream & out, const Student & student)
        {
            out << student.m_name << " " << student.m_intel;
            return out;
        }
};