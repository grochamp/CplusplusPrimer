#include <iostream>
using namespace std;
//직관적인 경우에만 써라
class Cents
{
private:
int m_cents;

public:
    
    Cents(int cents = 0){m_cents = cents;}
    int getCents() const{ return m_cents;}
    int& getCents() {return m_cents;}
    Cents operator + (const Cents &c2)
    {
    return Cents(this->m_cents + c2.m_cents);
    }  
};
/*
void add(const Cents &c1, const Cents &c2, Cents &c_out)
{
    c_out.getCents() = c1.getCents() + c2.getCents();
}
Cents add(const Cents &c1, const Cents &c2)
{
    return Cents(c1.getCents()+c2.getCents());
}


Cents operator + (const Cents &c1, const Cents &c2)
{
    return Cents(c1.getCents() + c2.getCents());
}*/
int main()
{
    Cents cents1(6);
    Cents cents2(11);
    //Cents sum;
    //add(cents1, cents2);

    cout << cents1.getCents() << endl;
   // cout << add(cents1, cents2).getCents() << endl;
    cout << (cents1 + cents2 + Cents(5) + Cents(11)).getCents() << endl;
    

    

    
    return 0;
}