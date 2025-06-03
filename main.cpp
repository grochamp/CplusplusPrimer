#include <iostream>
#include <vector>//vector 라이브러리 사용
using namespace std;
int main(){

    int a = 0;
    int b = 0;
    vector<int> number;//number라는 이름의 int를 취급하는 벡터
while (cin >> a){//int값을 입력할때마다
    number.push_back(a);
} 
for(b; b<number.size(); ++b){//b는 number 항목수만큼 커진다
    cout << number[b] << " ";
    
    
}
cout << endl;
    return 0;
}//입력완료 : ctr + z + ent