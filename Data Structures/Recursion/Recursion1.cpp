#include<iostream>
#include<conio.h>
using namespace std;

int fun(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return 1+fun(n-1);
    }
}

int main()
{
    int n=3;
    cout<<fun(3);
}