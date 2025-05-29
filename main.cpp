#include <iostream>

using namespace std;

int main(){

    //char : 작은 문자형
    //null 문자를 만나지 않으면 출력이 계속된다. null을 명시해줘야한다.
    // 큰따옴표 : null이 명시적으로 포함된 의미. 작은따옴표는 아니다. char형은 한글자만 취급하기때문에 null을 사용하는 큰따옴표를 쓸 수 없다.

    char a = 'b';
    cout << a << endl;
    
    //bool은 거짓 혹은 참   
    //거짓은 0, 참은 1
    //그 외 값을 넣으면 1이 된다.
    bool b = 1;
    bool c = 0;
    bool d = 2;  //1이 나온다다
    cout << b << c << d<< endl;

    //상수 선언. 바로 값을 대입해줘야함
    const float PIE = 3.14;

    //강제 데이터 변환
    //방식 : static_cast<typename>(데이터명)
    char ch = 'M';
    cout << static_cast<int>(ch) << endl;





    return 0;


}