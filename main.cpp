#include <iostream>
using namespace std;
int main(){


    const int num_students = 20;
int student_scores[num_students] = {99, 76, 35, 77, 66,}; //배열은 그자체로 주소나타냄
cout << &student_scores << endl;
cout << &student_scores[0] << endl;
cout << &student_scores[1] << endl;//int는 변수 하나가 4바이트라 4차이남





    return 0;
}