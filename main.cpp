#include <iostream>
#include "add.h"
using namespace std;
int a, b = 0;
namespace special1{
    int sppecial1(int a, int b)
    {return a+b;
    }
}

int main(){
cout << special1::sppecial1(1, 55) << endl;


    return 0;
}