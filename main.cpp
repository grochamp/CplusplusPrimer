#include <iostream>
#include <cstring>
using namespace std;

int main(){


    char source[] = "Copy this!" ;
    char dest[50]; //50개짜리 문자 배열
    strcpy_s(dest, 50, source);

    cout << source << endl;
    cout << dest << endl;
    

    

    // char myString[255];

    // cin.getline(myString, 255);
    // int ix =0;
    // while (true){

    //     if(myString[ix] == '\0') break;

    //     cout << myString[ix] << " " << (int)myString[ix] << endl;
    //     ++ix;



    
    //cout << myString << endl; 
    //cin >> myString; 
    //myString[4] = '\0'; 
    //cout << myString << endl; //0부터 널까지 출력. 0~3만 출력함




    //for (int i = 0; i < 7; ++i)
    //{
        //cout << (int)myString[i] << endl;//6개가 아니라 널까지해서 7개
       // cout << sizeof(myString) / sizeof(myString[0]) << endl; // 7 / 1 = 7

    //}
    return 0;
}