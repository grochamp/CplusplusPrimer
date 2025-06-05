#include <iostream>
using namespace std;

namespace a{
    int my_var =10;
}

namespace b{
    int my_var = 20;
}

int main(){
    {using namespace b;
        cout << my_var << endl;
    }
    {using namespace a;
        cout << my_var << endl;
    }
    return 0;
}