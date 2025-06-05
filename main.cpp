#include <iostream>
#include <algorithm>
using namespace std;
#define LIKE_APPLE


int main(){
#ifdef  LIKE_APPLE
    cout << "APPLE" << endl;
#else
    cout << "ORANGE" << endl;
#endif
    return 0;

}