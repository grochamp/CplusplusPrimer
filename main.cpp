#include <iostream>
using namespace std;    
int main(){
    
    float a = 1.0f;
    double d = a;
    cout << typeid(a).name() << endl;
    int x = 30000;
    char word = x;
    cout << static_cast<int>(word) << endl;//어이없는숫자

    


    return 0;
}