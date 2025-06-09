#include <iostream>
#include <string>
using namespace std;

class Mother
{
    protected: //private 유지하면서 상속받는애들한테는 열어줌
        int m_i;

    public:


    void setValue(const int& i_in)
    {
        m_i = i_in;
    }

    int getValue()
    {
        return m_i;
    }
};

class Child : public Mother{ //상속 표시

        private :
        double m_d;

        public:
        Child(const int & i_in, const double & d_in)
        {

            setValue(i_in, d_in);
        }

        void setValue(const int & i_in, const double & d_in)
        {
            // m_i = i_in;
            Mother::setValue(i_in);
            m_d = d_in;
        
        }




        void setValue(const double & i_in ,const double & d_in) //바로 위 setvalue와 오버로딩
        {

            m_d = d_in;
        }

        double getValue()
        {
            return m_d;
        }
    };
class Daughter : public Mother{

};

class Grandson : public Mother{


};


int main()
{

    Mother mother;
    mother.setValue(1024);
    cout << mother.getValue() << endl;



    Child child(1024, 128);
    //child.setValue(128);
    cout << child.Mother::getValue() << endl;
    cout << child.getValue() << endl;
    return 0;
}