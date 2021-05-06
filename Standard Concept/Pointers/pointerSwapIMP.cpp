// Swap 2 number without using third number

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a=20,b=35,*p1=&a,*p2=&b;
    cout<<"Before swap: "<<"p1: "<<*p1<<" p2: "<<*p2<<endl;
    *p1=*p1+*p2;
    cout<<*p1;
    *p2=*p1-*p2;
    cout<<*p2;
    *p1=*p1-*p2;
    cout<<*p1;
    cout<<"Before swap: "<<"p1: "<<*p1<<" p2: "<<*p2<<endl;
    return 0;
}