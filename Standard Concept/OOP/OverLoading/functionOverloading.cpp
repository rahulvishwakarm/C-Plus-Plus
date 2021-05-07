#include<iostream>
#include<conio.h>
using namespace std;

class Calculate
{
    public:
        static int add(int a,int b)
        {
            return a+b;
        }

        static int add(int a,int b,int c)
        {
            return a+b+c;
        }
};

int main()
{
    Calculate C ;
    cout<<C.add(2,4)<<endl;
    cout<<C.add(6,9,5);
    return 0;
}