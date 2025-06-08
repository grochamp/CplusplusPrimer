#include <iostream>
#include <cassert>
using namespace std;

class Fraction
{
    private:
    int m_numerator;
    int m_denominator;

    public:
    Fraction(int num = 0, int den = 1)
    : m_numerator(num), m_denominator(den)
    {
        assert(den !=0);
    }

    Fraction(const Fraction &fraction)
        : m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
        {
            cout << "몇번 호출되었나" << endl;
        }
    friend ostream & operator << (ostream & out, const Fraction & f)
    {
        out << f.m_numerator << " / " << f.m_denominator;; //출력되는 형태
        return out;

    }

};

int main()
{

    Fraction frac(3, 5);

    Fraction fr_copy = frac;

    cout << frac << " " << fr_copy << endl;

    return 0;
}
