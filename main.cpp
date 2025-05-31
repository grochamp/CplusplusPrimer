#include <iostream>
using namespace std;
int main (){

    int a;
    cin >> a;
    switch (a){
//case에 해당하면 해당 값에 따름. 해당하지 않으면 default에 따름
case 1:
        cout << "입력값 1 \n";
        break;//break 안걸어주면 default값도 들어감

    
default: cout << "이외의값 \n";


    }
  cout <<"스위치 끝 \n";

//continue : 무시하고넘어감
int b = 0;
while (b < 5) {
    b++;
if (b == 2) continue;
cout << b << " ";

}



    return 0;
}
