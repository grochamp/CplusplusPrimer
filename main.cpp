#include <iostream>
#include <cassert>
#include <array>
using namespace std;

void printValue(array<int, 5> &my_array, const int& ix)
{
assert(ix >=0);
    assert(ix <= my_array.size() -1);

    cout << my_array[ix] << endl;

}

int main()
{
    const int z = 11;
    assert(z == 5);
    static_assert(z == 5, "x must 5");



    array<int, 5> my_array{1, 2, 3, 4, 5};
    printValue(my_array, 100);
    //assert(false);//디버그 모드에서만 발동


    return 0;
}