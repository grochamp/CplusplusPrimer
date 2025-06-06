#include <iostream>
using namespace std;
int main(){
/*
    int x;
    cin >> x;


    if(x>10){//하나만 있으면 중괄호 생략도 가능

        cout << "10보다 크다"<< endl;
    }
    else if(x<10){
        cout << "작다" <<endl;
    }
    else {
        cout << "같다" <<endl;
    }
*/
    int a, b;
    cin >> a >> b;
    if(a > 0 && b > 0){
        cout << "크다" << endl;
    }
    else if (a==0 && b == 0 ){
        cout << "영영" << endl;
    }
    else if (a > 0 || b > 0 ){//or
        cout << "하나만" << endl;
    }
    else{cout << "뭐지" << endl;}

    return 0;
}