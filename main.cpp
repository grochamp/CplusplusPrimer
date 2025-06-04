#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> number(10);
    for (int a = 0; a< 10; ++a)
    { cin >> number[a];}
    for (auto& n : number){
        n = 10*n;
         cout << n << " ";
    } 
   return 0;
    
}