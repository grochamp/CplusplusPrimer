#include <iostream>
using namespace std;
//오버라이딩 : 부모를 재정의
class A
{
    public:
        virtual void print(int x) {cout << "A" << endl;} 
};

class B : public A
{
    public :
        void print(int x) override {cout << "B" << endl;} // short면 type 달라서 오버라이딩 안됨. override라고 넣으면 알아서 오류 있는지 찾아줌
                                                        // final : 오버라이딩 막기
};

class C : public B
{
        public:
        void print() {cout << "C" << endl;}

};



int main()
{
    A a;
    

    B b;
    

    C c;
    

    

    A *ptr= &b;
    ptr->print(1);

    return 0;
}