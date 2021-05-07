// Overriding - If derived class defined the same function as in Base/Parent class it is called over riding.

#include<iostream>
#include<conio.h>
using namespace std;

class Oveririding
{
    public:
        void eat()
        {
            cout<<"Eating...";
        }
};

class NewOverriding: public Oveririding 
{
    public:
        void eat()
        {
            cout<<"Eating... Again";
        }
};

int main()
{
    NewOverriding NO = NewOverriding();
    NO.eat();
    return 0;
}