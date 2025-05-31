#include <iostream>
using namespace std;
int main(){

    //반복문
    for (int i = 0; i <5; i++) {
        //i++를 밖에서 선언해줘도됨
        cout << i << "회" << endl;
        // i++ 이런식으로
    }
    //! = 같지 않다
    // == 비교, = 대입
    string str = "SON";
    int i = 0;
    while (str[i] != '\0'){
        cout << str[i]; //줄바꿈 없이 출력
        i++;
    }
    //dowhile문 : 먼저 실시하고 틀린지 확인함. 최소 1회는 시행된다는뜻
cout << endl;


    //간단하게 for문 쓰기
    for (char c : str){
        cout << c;
    }

    cout << endl;
    //중첩 루프 : 2차원 배열
    int temp[4][5]={             //4x5표
        {1, 2, 3, 4, 5}, //행 자료중 첫번째
        {11, 22, 33, 44, 55},
        {111, 222, 333, 444, 555},
        {1111, 2222, 3333, 4444, 5555}



    };
    for(int row = 0; row < 4; row++){
        for(int col = 0; col < 5; col++){
            cout << temp[row][col] << endl;
        }
    }

    return 0;

}