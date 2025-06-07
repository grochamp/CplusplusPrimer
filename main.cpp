#include <iostream>
using namespace std;

inline int min(int x, int y)//inline대로 main의 min에서 함
{
    return x > y ? y : x;
}

int main()
{
    cout << min(5, 6) << endl;
    cout << min(3, 2) << endl;

    return 0;
}