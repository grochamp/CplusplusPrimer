#include <iostream>
using namespace std;
int main(){

    
    char name [] = "LeBron James";
    const int n_name = sizeof(name) / sizeof(char);

    for (int i = 0; i < n_name; ++i)
    {
        cout << *(name+i);

    }
    cout << endl;







    double array[] = { 9, 5, 1, 7};

    double *ptr = array;
    for (int i = 0; i < 5; ++i)
    //cout << array[i] << " " << (uintptr_t)&array[i] << endl;//double array 라서 8씩 늘음
    cout << *(ptr + i) << " " << uintptr_t(ptr+i) << endl;
    
/*
    int value = 7;
    int *ptr = &value;
    cout << uintptr_t(ptr) << endl;
    cout << uintptr_t(ptr+1) << endl;//int 1 늘어나서 4늘어남
*/

    return 0;
}