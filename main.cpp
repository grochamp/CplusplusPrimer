#include <bitset>
#include <iostream>
int main(){
    using namespace std;
      
    int a = 0b0101;
    int b = 0b1100;
    cout << bitset<4> (a & b) << endl;
    cout << bitset<4> (a | b) << endl;
    cout << bitset<4> (a ^ b) << endl;

    
    
    
    return 0;
}