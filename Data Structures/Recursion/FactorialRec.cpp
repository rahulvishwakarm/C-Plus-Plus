#include<iostream>
#include<conio.h>
using namespace std;

int Fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*Fact(n-1);
    }
}

int main()
{
    int n=5;
    cout<<Fact(n);
}