//예외처리 : 느려짐
#include <iostream>
#include <fstream>
#include <String>
#include <cmath>

using namespace std;

int main()
{
    //try, catch, throw
    double x;
    cin >> x;

    try //잘못된 경우
    {
        if (x < 0.0) throw string("잘못된 입력");

        cout << sqrt(x) << endl;
    }
    catch (string error_message) //대처법
    {

        cout << error_message << endl;
    }

    return 0;
}  