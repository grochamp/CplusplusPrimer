#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    for(int count = 0; count < argc; ++count)
    {

        string argv_single = argv[count];

        
        cout << argv[count] << endl;
    }


    return 0;
}