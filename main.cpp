#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int number[] = {1, 3 ,5 ,7};
int nuumber[] = {1, 3, 5 ,9};
int main(){
    if (equal(begin(number),end(number),begin(nuumber)))
    {
        /* code */cout << "같음" << endl;
    }
    else{
        cout << "다름" << endl;
    }
    
    return 0;
}