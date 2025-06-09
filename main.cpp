#include <iostream>
#include <string>
using namespace std;

class Animal
{
    protected :
        string m_name;

    public :
        Animal(string name)
            : m_name(name)
            {}

    public :
        string getName() {return m_name; }

        virtual void speak() const//virtual : 자식을 따라가게해줌
        {
            cout << m_name << " ???" << endl;
        }
};

class Cat : public Animal
{
    public:
        Cat(string name)   
            : Animal(name)//Animal에서 이름 받아서 Cat에 씀
            {}

        void speak() const
        {
            cout << m_name << " Meow" << endl;
        }

};

class Dog : public Animal
{
        public:
            Dog(string name)
                : Animal(name)
                {}

        void speak() const
        {
            cout << m_name << " Woof" << endl;
        }


};

int main()
{
    Animal animal("my animal");
    Dog dog("my dog");
    Cat cat("my cat");


    animal.speak();
    dog.speak();
    cat.speak();

    Animal *ptr_animal1 = &cat;  //포인터로 호출하면 자기가 부모(Animal)인줄 알고 행동한다
    Animal *ptr_animal2 = &dog;

    ptr_animal1->speak();
    ptr_animal2->speak();

    Cat cats[] = { Cat("cat1"),Cat("cat2"),Cat("cat3"),Cat("cat4"),Cat("cat5"),Cat("cat6")};
    Dog dogs[] = { Dog("dog1"),Dog("dog2")};

    Animal *my_animals[] = {&cats[0], &cats[1], &cats[2], &cats[3], 
                                &dogs[0], &dogs[1]};

    for (int i = 0; i <6; ++i)
        my_animals[i]->speak();
    return 0;

}