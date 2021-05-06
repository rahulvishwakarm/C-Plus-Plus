#include<iostream>
#include<conio.h>
using namespace std;

class Dog {
    public:
        void bark() {
            cout<<"Dog Barking...!!"<<endl;
        }

        void eating() {
            cout<<"Dog Eating...!!"<<endl;
        }

        void playing() {
            cout<<"Dog Playing...!!"<<endl;
        }
};

class Prop1Dog: public Dog {

};

class Prop2Dog: public Prop1Dog {

};

int main()
{
    Prop2Dog p1;
    p1.bark();
    p1.eating();
    p1.playing();
}