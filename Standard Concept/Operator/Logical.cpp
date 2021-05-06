#include<iostream>
#include<conio.h>

using namespace std;

void AND(int a,int b) {
    cout<<a&&b;
    cout<<endl;
}

void OR(int a,int b) {
    cout<<a||b;
    cout<<endl;
}

void NOT(int a,int b) {
    cout<<!b;
    cout<<endl;
}

int main()
{
    int num1 = 12;
    int num2 = 17;
    AND(num1,num2);
    OR(num1,num2);
    NOT(num1,num2);
}