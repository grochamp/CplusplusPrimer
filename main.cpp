#include <iostream>
using namespace std;

template<typename T>
T getMax(T x, T y)
{
    return  (x>y) ? x : y;
}

int main()
{
    cout << getMax(1, 7) << endl;
    cout << getMax(3.14, 8.88) << endl;
    cout << getMax("a", "c") << endl;
    return 0;
}
