#include <iostream>
#include <bitset>
int main(){
    using namespace std;


    const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1; //1자리 밀음
    const unsigned char opt2 = 1 << 2; //2자리 밀음

    cout << bitset<8>(opt0) << endl;
    cout << bitset<8>(opt1) << endl;
    cout << bitset<8>(opt2) << endl;
    unsigned char items_flag =0;
    cout << bitset<8>(items_flag) << endl;//2진수를 이용해 8칸을 활용할수있다

    //아이템 획득표시
    items_flag = opt0;
    cout << "Get Item0" << " " << bitset<8>(items_flag) << endl;
    items_flag |= opt2;// |= 값 덮어씌우기가 아닌 갱신
    cout << "Get Item2" << " " << bitset<8>(items_flag) << endl;

    items_flag &= ~opt2;//잃어버림(덮어씌우기 아니라 갱신임)
    cout << "Lost Item2" << " " << bitset<8>(items_flag) << endl;
//확인
    if(items_flag & opt1) {
        cout << "has item1" << endl;
    }
    else{cout << "no item1" << endl;}
    if(items_flag & opt0) {
        cout << "has item0" << endl;
    }
    else{cout << "no item0" << endl;}

//obtain item 2, 3(동시에)
items_flag |= (opt2 | opt1);

cout << bitset<8>(items_flag) << endl;
cout << "Items 2, 3 obtained" << bitset<8>(items_flag) << endl;




    return 0;
}