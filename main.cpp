#include <iostream>
using namespace std;

int main()
{
    //배열 : 같은 데이터형의 집함
    //typeName arrayName[arraySize]
    //int xyz[3] int데이터형의 3개의 항목을 가지는 xyz라는 이름의 배열
    
    short month[12] = {1, 2, 3};
    cout << month[0] << endl;

    //12개 원소를 전부 지정하지 않으면, 지정하지 않은 값들은 0이된다. month[3] = 0
    //배열을 다른 배열에 통째로 대입 불가
    //따로 arraysize를 designate 안하면 선언한 인수 갯수로 arraysize가 자동으로 정해진다. 

    char a[6] = { 'h', 'e', 'l', 'l', 'o', '\0'};   //5개 인수에 널문자를 추가해서 6개로 설정
    cout << a << endl;

    char b[] = "hello";  //비워두면 알아서 hello의 갯수대로 arraysize를 정함. 쌍따옴표로 널문자를 대신함.
    cout << b << endl;


    char name1[40];
    // cin>> name1;
    // cout << name1 <<endl;
    cin.getline(name1, sizeof(name1)); //공백도 가능 
    // cout << name1 << endl;
    
    //string 장점 : arraysize 할당 안해도됨
    string str1 = string(name1);
    cout << str1 << endl;



    return 0;
}