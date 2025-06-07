#include <iostream>
using namespace std;


const char* getName()
{

    return "Jokichi";
}



int main(){

    const char *name = getName();
    const char *name2 = getName();
    

    cout << (uintptr_t)name << endl;
    cout << (uintptr_t)name2 << endl;//내용이 같으면 주소도 같음

    char d = 'P';
    cout << &d << endl;//이상한값나옴:널찾느라






    return 0;
}