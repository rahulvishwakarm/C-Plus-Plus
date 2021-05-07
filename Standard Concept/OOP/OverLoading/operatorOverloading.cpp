#include<iostream>
#include<conio.h>
using namespace std;

//program to overload the unary operator ++

class OperLoad
{
    private:
        int num = 10;
    public:
        void operator ++() {  //++ operator is overloaded
            num = num+2;
        }

        void Print() {
            cout<<"The count is: "<<num;
        }
};

int main()
{
    OperLoad tt;
    ++tt;
    tt.Print();
    return 0;
}
