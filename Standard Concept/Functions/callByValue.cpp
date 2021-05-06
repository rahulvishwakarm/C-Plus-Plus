#include<iostream>
#include<conio.h>
using namespace std;

void change(int a) {
    a=5;
    cout<<"Value of data is:"<<a;
}

int main()
{
    int data = 12;
    change(data); 
    cout<<"Value of data is:"<<data; //value remaain unchanged
    return 0;
}