#include <iostream>
#include "calc.h"


using namespace std;


int main()
{
    Calc cal(10);
    cal.add(5);
    cal.print();
    cal.add(10).sub(10).mult(100).print();//print는 왜 되냐

    return 0;
}