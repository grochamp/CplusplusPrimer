#include <iostream>
using namespace std;


int pow(int base, int exponent){

    int result = 1;

    for (int count = 0; count < exponent; ++count)
    result *= base;
    return result;
}

int main(){




int count = 0;
for(; count < 10; ++count)//값을 밖에두고 그냥 ;로 부를수있다. 조건도 없애고 그냥 ;;로 할수도있다.
{
 
cout << count << endl;
cout << pow(2,4) << endl;

}



    return 0;
}