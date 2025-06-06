#include <iostream>
using namespace std;

void breakorReturn(){
    while (true)
    {
        char ch;
        cin >> ch;

        if (ch == 'b')
        break;
        if(ch == 'r')
        return;
//continue : 아래에 있는거 실행안하고 다음값으로감
    }
cout << "hello"<< endl;

}

int main(){

    breakorReturn();


    return 0;

}