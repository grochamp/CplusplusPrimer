#include <iostream>
using namespace std;

int main(){


    int length;
    cin >> length;

    int *array = new int[length]{17, 12, 66, 231};//array[] 0~3위치까지 얘네가 차지함

    array[0] = 1;
    array[1] = 2;
    for(int i = 0; i < length; ++i)
    {

        cout << (uintptr_t)&array[i] << endl;
        cout << array[i] << endl;
    }


    return 0;
}