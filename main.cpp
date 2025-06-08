#include <iostream>
using namespace std;


class Date
{
//public:
    int m_month;
    int m_day;
    int m_year;

public:
void setDate(const int& month_input, const int& day_input, const int& year_input)
{
    m_month = month_input;
    m_day = day_input;
    m_year = year_input;

}
int getDay()
{
    return m_day;
}


};

int main()
{
    Date today;
    today.setDate(8, 4, 2025);
    cout << today.getDay() << endl;


    
    return 0;
}