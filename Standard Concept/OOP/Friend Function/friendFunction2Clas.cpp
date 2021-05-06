#include<iostream>
#include<conio.h>
using namespace std;

class B;
class A
{
    int x;
    public:
        void setData(int i)
        {
            x=i;
        }
        friend void min(A,B); //friend function
};

class B
{
    int y;
    public:
        void setdata(int i)
        {
            y=i;
        }
        friend void min(A,B);
};

void min(A a,B b)
{
    if(a.x<=b.y)
    {
        cout<<a.x;
    }
    else{
        cout<<b.y;
    }
}

int main()
{
    A a;
    B b;
    a.setData(10);
    b.setdata(20);
    min(a,b);
    return 0;
}