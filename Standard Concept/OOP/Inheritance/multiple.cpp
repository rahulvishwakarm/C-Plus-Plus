#include<iostream>
#include<conio.h>
using namespace std;

class Dog {
    public:
        void bark() {
            cout<<"Dog Barking...!!"<<endl;
        }

        void playing() {
            cout<<"Dog Playing...!!"<<endl;
        }
};

class Prop1Dog {
    public:
    void eating() {
            cout<<"Dog Eating...!!"<<endl;
        }
};

class Prop2Dog: public Dog, public Prop1Dog{

};

int main()
{
    Prop2Dog p1;
    p1.bark();
    p1.eating();
    p1.playing();
}