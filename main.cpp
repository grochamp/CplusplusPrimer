#include <iostream>
#include <array>
using namespace std;

    int& get(array<int, 100>& my_array, int ix)
    {
        return my_array[ix];
    }

/*
int getValue (int x)
{
    int value = x * 2;
    return value;

}
*/
/*
int* allocateMemory(int size)
{
    return new int[size];


}*/
int main()
{
    array<int, 100> my_array;
    my_array[30] = 10;

    get(my_array, 30) = 1024;

    cout << my_array[30] << endl;

    return 0;

}