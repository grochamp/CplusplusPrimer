#include <iostream>
using namespace std;

int main(){

    int fixedArray[] = { 1, 3, 5, 7};

    int *array = new int[6] {1, 2, 3 ,4, 5};


    delete[] array;

    return 0;
}