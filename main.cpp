#include <iostream>
using namespace std;

class Fraction
{
private:
    int m_numerator; //값 지정 가능
    int m_denominator;


public:

    Fraction(const int& num_in, const int& den_in = 1)
    {

        m_numerator = num_in;
        m_denominator = den_in;
    }
    void print()
    {
        cout << m_numerator << " / " << m_denominator << endl;
    }
};

int main()
{
    //Fraction frac;//파라미터가 없을때는 괄호 빼기
    //frac.print();
    Fraction one_thirds(1, 1);
    one_thirds.print();


    return 0;
}