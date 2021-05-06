#include<iostream>
#include<conio.h>
using namespace std;

void add(int a,int b) {
    cout<<a+b<<endl;
}

void subt(int a, int b) {
    cout<<a-b<<endl;
}

void mul(int a,int b) {
    cout<<a*b<<endl;
}

void divi(int a, int b) {
    cout<<a/b<<endl;
}

void mod(int a,int b) {
    cout<<a%b<<endl;
}

int main()
{
    int num1 = 12;
    int num2 = 15;
    add(num1,num2);
    subt(num1,num2);
    mul(num1,num2);
    divi(num1,num2);
    mod(num1,num2);
    getch();
}