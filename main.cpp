#include <iostream>
#include <cmath>
int main(){
     using namespace std;
    
/*
     int x, y;
     cin >> x >> y;
     cout << "입력한 int 값은 " << x << "와 " << y <<"입니다"<<endl;*/

     double d1(100 - 99.99);
     double d2(10-9.99);

     cout << d1 << endl;
     cout << d2 << endl;
     if (d1 == d2){//different
        cout << "equal" << endl;
     }
     else {
        cout << "not equal" << endl;
     }
     cout << d1 - d2 << endl; //5.32907e-15
    

    return 0;
}