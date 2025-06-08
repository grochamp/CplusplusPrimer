#include <iostream>
#include <string>
using namespace std;

class Something
{
    public:
    string m_value = "default";
    const string& getValue() const {cout << "컨스트" << endl; return m_value;}
    string& getValue() {cout << "일반" << endl; return m_value;}

};

int main()
{

    Something something;
    something.getValue(); 
    const Something something2;
    something2.getValue();
    return 0;
}