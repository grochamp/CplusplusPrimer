#include <iostream>
int a = 0;


int main(){
    using namespace std;




while(cin >> a){
    if((a % 2) == 1){
        cout << "홀수" << endl;
    }
    else if(a == 0){
        cout << 0 << endl;
    }
    else{
        cout << "짝수" << endl;
    }
}



    return 0;
}