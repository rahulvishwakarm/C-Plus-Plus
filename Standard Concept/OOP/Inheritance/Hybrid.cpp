#include<iostream>
#include<conio.h>
using namespace std;

class Dog{
    public:
        void bark() {
            cout<<"Dog Barks..."<<endl;
        }
};

class Dog_A:public Dog {
    public:
        void sleep() {
            cout<<"Dog Sleeps..."<<endl;
        }
};

class Dog_B:public Dog {
    public:
        void play() {
            cout<<"Dog play..."<<endl;
        }
};

class Dog_A_B: public Dog_A,public Dog_B {
    public:
        void run() {
            cout<<"Dog Runs...."<<endl;
        }
};

int main()
{
    Dog_A_B D = Dog_A_B();
    D.play();
    D.run();
    D.sleep();
}