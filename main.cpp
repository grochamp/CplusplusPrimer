#include <iostream>
using namespace std;



struct Time
{

    int hours;
    int mins;
};

const int minsPerHr = 60;
Time sum(Time*, Time*);
void showTime(Time);

int main()
{
//함수는 원본이 아닌 복사본을 대상으로 작업한다.

Time day1 = {1, 45};
Time day2 = {2, 17};
Time total = sum(&day1, &day2);   //&: 주소연산자

cout << "소요시간 : ";
showTime(total);

return 0;
}

Time sum(Time* t1, Time* t2){
    Time total;

    total.mins = (t1->mins + t2->mins) %minsPerHr;  //포인터에서 접근할때는 ->사용 //x+y의 시간을 제외한 나머지
    total.hours = t1->hours + t2->hours +   //x+y+분의 몫
    (t1->mins + t2->mins) / minsPerHr;

    return total;



}
void showTime(Time t1) {
    cout << t1.hours << "시간 " << t1.mins << "분" << endl;
}