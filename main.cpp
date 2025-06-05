#include <iostream>

bool isEqual(int a, int b) {

    bool result = (a == b);
    return result;
}

int main(){using namespace std;

    cout << isEqual(5,5) << endl; //true 1
    cout << isEqual(5,1) << endl; //false 0


bool b1 = true ; //copy 
bool b2(false); //direct
bool b3{ true }; //uniform
b3 = false;

cout << (true && true) << endl;//and
cout << (true || false) << endl; //or


// if(true), if(false) : ~일때만 실행됨
// if(x) x에 0만 아니면 다 True임 0이면 False


    return 0;

}