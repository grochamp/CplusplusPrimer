#include <iostream>
int main(){
    using namespace std;
    char c1(65);//A
    char c2('A');
    char c3;
cout << char(65) << endl;
cout << int('A') << endl; //65


cout << static_cast<char>(65) << endl;//static cast : char로 나오게 강제
cout << static_cast<int>('A') << endl;//static cast : int로 나오게 강제

// cin >> c3;
// cout << c3 << " " <<static_cast<int>(c3) << endl;

cout << int('\t') << endl;
cout << "첫번째라인\n두번째줄";




return 0;
}