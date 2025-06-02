#include <iostream>
using namespace std;
int main(){

int currVal = 0, val = 0;
if (cin >> currVal){ //입력이 성공하면 
    int cnt = 1;
    while (cin >> val){ // 입력이 성공하면
        if (val == currVal)
        ++cnt; //카운트 늘리기
        else {
            cout << currVal << " occurs "
            << cnt << "times" << endl;
            currVal = val;
            cnt = 1;
//다른 순간 출력
        }
    }
    cout << currVal << " occurs " 
    << cnt << " times" << endl;
    // 마지막 값을 출력하기위해 while문 이후에 출력

}





    return 0;
}