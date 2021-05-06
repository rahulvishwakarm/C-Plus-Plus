#include<iostream>
#include<conio.h>
using namespace std;

void equal(int a,int b) {
    cout<<(a==b)<<endl;
}

void notequal(int a, int b) {
    cout<<(a!=b)<<endl;
}

void lessequal(int a,int b) {
    cout<<(a<=b)<<endl;
}

void greaterqual(int a, int b) {
    cout<<(a>=b)<<endl;
}

void lessthan(int a,int b) {
    cout<<(a<b)<<endl;
}

void greaterthan(int a,int b) {
    cout<<(a>b)<<endl;
}

int main()
{
    int num1 = 12;
    int num2 = 15;
    equal(num1,num2);
    notequal(num1,num2);
    lessequal(num1,num2);
    greaterqual(num1,num2);
    lessthan(num1,num2);
    greaterthan(num1,num2);
    getch();
}