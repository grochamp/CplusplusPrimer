#include <iostream>
using namespace std;
int a = 0;
int main(){
cin >> a ;
string win = (a>=90) ? "1차 합격" 
: (a>=70) ? "2차 합격" : " 불합격";
    cout << win << endl;



    return 0;
}