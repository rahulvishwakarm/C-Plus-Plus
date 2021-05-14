/*
    Dynamic Scoping
    
    Defination of variable is resolved by searching its contianing block or function and if not found , 
    then searching its calling function and if still not found then the function which called and then that calling
    function will be searched and so on.
*/

#include<iostream>
#include<conio.h>
using namespace std;

    int fun1(int);
    int fun2(int);
    int a=5;
    int main()
    {
        int a = 10;
        a = fun1(a);
        printf("%d",a);
    }

    int fun1(int b)
    {
        b=b+10;
        b=fun2(b);
        return b;
    }

    int fun2(int b)
    {
        int c;
        c=a+b;
        return c;
    }