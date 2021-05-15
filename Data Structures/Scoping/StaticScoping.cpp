/*
    Defination of variable is resolved by searching its containing block or function,if its fails then it 
    search the outer containing block.
*/

#include<iostream>
#include<conio.h>
using namespace std;

int fun();
int a=10,b=20;

int main()
{
    fun();
}

int fun()
{
    int a =5;
    {
        int c;
        c=b/a;    // here value of a=5 and b=20
        cout<<c;
    }
}