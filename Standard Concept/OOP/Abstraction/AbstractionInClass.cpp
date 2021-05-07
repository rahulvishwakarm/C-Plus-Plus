#include<iostream>
#include<conio.h>
using namespace std;

class Sum
{
    private:
        int x,y,z;
    public:
        void add()
        {
            cout<<"Enter 1st number: ";
            cin>>x;
            cout<<"Enter 2nd number: ";
            cin>>y;
            z=x+y;
            cout<<"Sum of two number is: "<<z;
        }
};

int main()
{
    Sum sm;
    sm.add();
    return 0;
}