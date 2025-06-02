#include <iostream>
using namespace std;
int main(){


    int a = 0, b = 0;
    // 첫번째 입력값이 두번째 입력값보다 작게하는 방법
    while (true){
    cout << "fisrt number must be lower than second number" << endl;
    cin >> a >> b;
    if (a < b) break;
    cout << "error" << endl;
}
cout << "complete. a is " << a << " and b is " << b << endl;

return 0;

}