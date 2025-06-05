#include <iostream>
int main(){
    using namespace std;

    bool x = true;
    bool y = false;
    cout << (x && y) << endl; //both true -> true, this case false(0)

    cout << (x || y) << endl; //at least one true -> true this case x true-> true(1)

    int v =1 ;
    if(v == 0 || v == 1) // or
    cout << "v is 0 or 1" << endl;

    //short circuit evaluation
    int p = 2;
    int q = 2;
    if (x ==1 && y == 2){//if(x,y) if x is uncorrect, don't calculate y

    }

    //De Morgan's Law
    !(x && y); // -> same as !x || !y
    !(x || y); // same as !x && !y


    
    return 0;
}