#include<iostream>
#include<conio.h>
using namespace std;

// Friend Function -  When a function is defined as friend function then private and protected member in that class can be accessed usind that function

class Box {
    private:
        int length = 20;
    public:
        Box(): length(0) {}
        friend int printLength(Box);  //Friend Function
};

int printLength(Box b) 
{
    b.length+=10;
    return b.length;
}

int main()
{
    Box b;
    cout<<"Length of box: "<<printLength(b)<<endl;
    return 0;
}
