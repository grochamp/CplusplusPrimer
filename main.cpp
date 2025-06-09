#include <iostream>
#include "monster.h"

using namespace std;

int main()
{

    Monster mon1("abrahm", Position2D(0, 0));
    {
            mon1.moveTo(Position2D(1, 1));
            cout << mon1 << endl;

    }
    return 0;
}