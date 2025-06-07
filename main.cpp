#include <iostream>
using namespace std;

struct Person{

    int age;
    double weight;
    string name;

};



int main(){


    Person person;
    person.age= 5;
    person.weight=30;
    Person &ref = person;
    ref.age = 15;


    Person *ptr = &person;
    ptr->age =30; //표현방법이 이래요
    (*ptr).age = 20;

    Person &ref2 = *ptr;
    ref.age = 43;
    cout << &person << endl;
    cout << &ref2 << endl;






    return 0;
}