#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int number = 20;
    int *p;
    p=&number;
    cout<<"Address of variable number is: "<<&number<<endl;
    cout<<"Address of variable p is:"<<p<<endl;
    cout<<"Value of p variable is:"<<*p<<endl;
    return 0;
}