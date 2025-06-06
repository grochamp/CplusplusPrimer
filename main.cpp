#include <iostream>
#include <typeinfo>
#include <limits>

int main(){
    using namespace std;


    string aaa("abc");
    string b("가나다");
    cout << aaa + b << endl; //문자열덧셈 가능
    cout << aaa.length() << endl;//abc니까 세개


    const char my_strs[] = "Hello";
    const string my_hello = {"Hello"};//사용자 정의 자료형.
    cout << my_hello << endl;

    string my_ID = "123";//따옴표없이하면 형변환안됨
    cout << my_ID << endl;
    string a;
    cout << "이름" << endl;
    getline(cin, a);//cin을 a에 저장한다

    cin.ignore(32676, '\n');//32767만큼 받을떄까지 줄바꿈 무시
    // cin >> a;
    int ac;
    cout << "나이" << endl;
    //getline(cin, ac); //getline은 string만 가능
    cin >> ac;
    cout << a << "  " << ac;
    
//띄어쓰기해서 쓰면 두개 값 받는걸로 인식함




    return 0;}