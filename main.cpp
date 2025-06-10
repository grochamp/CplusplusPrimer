#include "Storage.h"

int main()
{
    Storage<int> nValue(5);
    Storage<double> dValue(6.6);

    nValue.print();
    dValue.print();

    return 0;


}