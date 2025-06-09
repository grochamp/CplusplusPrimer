#include <iostream>
using namespace std;

class A
{
    public:
        virtual void print() {cout << "A" << endl;} //virtual = 느리다.
};

class B : public A
{
    public :
        void print() {cout << "B" << endl;}

};

class C : public B
{
        public:
        void print() {cout << "C" << endl;}

};

class D : public C
{
        public:
        void print() {cout << "D" << endl;}

};

int main()
{
    A a;
    a.print();

    B b;
    b.print();

    C c;
    c.print();

    D d;
    d.print();

    B *ptr= &c;
    ptr->print();

    return 0;
}