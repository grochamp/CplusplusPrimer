#include <iostream>
using namespace std;

void fibonachi(int count, int cont)
{

    cout << count+ cont  << endl;
    if((count + cont)>100) return;
    fibonachi(cont, count+cont);


}

int main()
    {

        fibonachi(0, 1);
        return 0;
    }
