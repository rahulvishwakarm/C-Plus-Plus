#include<iostream>
#include<conio.h>
using namespace std;

class A   //Base Class
{
    int a;
    public:
        void display()
            {
                cout<<"Class A";
            }
};

class B  //Derived Class
{
    int b;
    public:
        void display()
        {
            cout<<"Class B";
        }
};
