#include<iostream>
#include<conio.h>
using namespace std;

void swap(int *x,int *y) {
    int temp;
    temp = *x;
    *x  = *y;
    *y=temp;
}

int main()
{
    int x=24;
    int y=19;
    cout<<"Value of x: \t"<<x;
    cout<<"Value of y: \n"<<y;
    swap(&x,&y);
    cout<<"Value of x: \t"<<x;
    cout<<"Value of y: "<<y;
}