#include <iostream>
using namespace std;

int main(){


    int count = 10;
    // while(1){


    //     cout << count << endl;
    //     ++count;

    //     if(count == 10) break;

    while(1){

        // cout << count << endl;
        ++count;
        if (count  % 1000 == 0) {
        cout << "1000의 배수" << " " << count << endl;}
        
        // break;
   


    }

    return 0;
}