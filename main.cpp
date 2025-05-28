#include <iostream>
#include<climits> //정수타입 범위 안전하게 알수있음

using namespace std;

int main() {
//";" 세미콜론은 종결자 역할을 한다
//endl을 써야 줄바꿈이된다
//cout : 출력시켜주세요
    cout << "HELLO World" << endl;

    

    //변수: 숫자로 시작 불가. 공백사용 불가, C++의 키워드 사용 불가가
    int a;
    a = 7;
    int b = 3; //선언하고 바로 대입 : 초기화
    cout <<"a의 값은 " << a <<", b의 값은 " << b << " 입니다."<< endl;


    //정수형 : int, short, long 등등 있음
    //unsigned => 음수를 사용하지 않겠다는 선언. 양수를 두배로 쓸수있다.
    //실수형 : float
    float c = 6.21;
    cout << c << endl;
    return 0;

}

