#include <iostream>
#include <string>
using namespace std;

int add(int x, int y)//들어오는 수 똑같은데 int, double같이 약간 타입 다를경우 사용가능
{
    return x + y;

}

double add(double x, double y)
{

    return x + y;
}

int main()
{
    cout << add(1, 2) << endl;
    cout << add(3.88, 7.23);


    return 0;
}