#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    public:
    int x;
    A(int a)
    {
        x=a;
    }

    A(A &i)  //Copying Constructor
    {
        x=i.x;
        cout<<x;
    }
};

int main()
{
    A a1(20);
    A a2(27);
}