#include <iostream>
#include <string>
using namespace std;


typedef int my_int;

void print(char *value){}//애매한 경우 오버로딩 안됨

//void print (int x) {}
//void print (my_int x){}//어차피 얘는 int라서 오버로딩으로 둘이 같은취급함
/*
int add(int x, int y)//들어오는 수 똑같은데 int, double같이 약간 타입 다를경우 사용가능
{
    return x + y;

}

double add(double x, double y)
{

    return x + y;
}
*/
int main()
{
    
    return 0;
}