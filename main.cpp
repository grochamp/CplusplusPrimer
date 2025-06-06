#include <iostream>
#include <string>

using namespace std;

struct Employee//14바이트 근데 사이즈오프는 16나옴->padding이라고함함
{

    short id;//2바이트
    int age;//4바이트
    double wage;//8바이트

};
struct  Person
{
    double  height;
    float   weight;
    int     age;
    string  name;

    void print()//구조체 안에 넣어서 하는게 훨씬 편함
{
cout << height << " " << name << " " << age << endl;

}

};

struct Family
{
    Person me, mom, dad;//구조체 안에 구조체 가능
};



int main(){

    Person me{176.4, 84.4, 28, "John"};
    me.print();
    Person tomodachi;
    Person mom;
    cout << sizeof(Employee) << endl;

    return 0;
}