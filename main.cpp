#include <iostream>
using namespace std;
int a = 0;
int main(){
    if(cin >> a){
        if(a>=90){cout << " A" << endl;}
        else if(a >= 80){cout << "B" << endl;}
        else if(a >= 70){cout << "C" << endl;}
        else{cout << "F"<< endl;}

    
    }


    return 0;
}