// Recursion is said to be tailed if the recussive function is the last thing call by the function
#include<iostream>
#include<conio.h>
using namespace std;

void fun(int);

void fun(int n)
{
    if(n==0)
    {
        return;
    }
    else
    {
        cout<<n;
    }
    return fun(n-1);
}

int main()
{
    fun(3);
    return 0;
}