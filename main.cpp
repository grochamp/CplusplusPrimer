#include <iostream>
using namespace std;
int main(){
int i = 5;
double d = 3.14;
i *=static_cast<int>(d);
cout << i << endl;
    return 0;
}