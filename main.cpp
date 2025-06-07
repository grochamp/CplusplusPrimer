#include <iostream>
using namespace std;



int main(){

    int i =5;
    float f = 3.2;
    char c = 'a';

    void *ptr = nullptr;

    ptr = &i;
    ptr = &f;
    ptr = &c;

cout << &f << " " << &i << endl;
cout << static_cast<float*>(ptr) << endl;//구차하게해야함 실제로 해야하는경우도있음

    return 0;
}