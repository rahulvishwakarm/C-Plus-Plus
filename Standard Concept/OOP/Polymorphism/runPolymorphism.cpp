#include<iostream>
#include<conio.h>
using namespace std;

class Animal
{
    public:
        void eat()
        {
            cout<<"Eating..."<<endl;
        }
};

class Dog: public Animal
{
    public:
        void eat()
        {
            cout<<"Eating bone..."<<endl;
        }
};


int main(void)
{ 
    Dog d = Dog();
    d.eat();
    return 0;
}