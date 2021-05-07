// Ambiguity can be occured in using the multiple Inheritance when function with the same name occurs in more than one base class
// Ambiguity means Uncertain 
// Note : Uncomment below 2 line to see ambigilty
#include<iostream>
#include<conio.h>
using namespace std;

class A {
    public:
        void display()
        {
            cout<<"Class A"<<endl;
        }
};

class B {
    public:
        void display()
        {
            cout<<"Class B"<<endl;
        }
};

class C: public A,public B
{
    void view()
    {
        // display();
    }
};

int main()
{
    C c;
    // c.display();
    return 0;
}
