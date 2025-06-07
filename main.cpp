#include <iostream>
using namespace std;


void printArray(int array[]){

    cout << sizeof(array) << endl; //배열 포인터값임 배열 크기가 아니고
    cout << *array << endl;

    *array = 100;
}
int main(){

    int array[5] = {9, 7, 5, 3, 1};

    cout << sizeof(array) << endl;

    int *ptr = array;
    cout << sizeof(ptr) << endl;

    cout << &array[0] << endl;
    cout << *array << endl;
    
    // int *ptr = array;
    // cout << ptr << endl;
    // cout << *ptr << endl;


    char name[] = "jackjack";
    cout << *name << endl;

    printArray(array);
    cout << array[0] << " " << *array << endl;
    return 0;
}