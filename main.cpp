#include <iostream>
using namespace std;
int main(){
    int number[10];
    int a = 0;
    for (a; a<10; ++a)
    {
        number[a] = a;
        cout << number[a] << " ";
    }
    return 0;
}