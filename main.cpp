#include <iostream>
#include <cmath>
using namespace std;

void addOne(int &y)//참조에 의한 전달 : 주소 그대로임
{
    y = y + 1;
}





void getSinCos(double degrees, double &sin_out, double &cos_out)
{

    static double pi = 3.141592;
    double radians = degrees * pi / 180.0;
    sin_out = sin(radians);
    cos_out = cos(radians);
}


void foo(int (&arr)[4])
{
    cout << arr << endl;
    cout << &arr << endl;

}

void printElement(int(&arr)[4])//반드시 대괄호 갯수 나와야함
{



}

int main()
{
    int arr[]{1, 2, 3, 4};
    printElement(arr);
    
    // double sin(0.0);
    // double cos(0.0);

    // getSinCos(30.0, sin, cos);

    // cout << sin << " " << cos << endl;


    // int x =5 ;
    // int *ptr = &x;

    // cout << x << " " << &x << endl;

    // addOne(x);

    // cout << "변한 값 " <<  x << " " << &x << endl;

    // foo(6);






    return 0;
}