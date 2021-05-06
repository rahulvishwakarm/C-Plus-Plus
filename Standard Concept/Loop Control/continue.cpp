#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    for(int i=0;i<10;i++) {
        if(i==5) {
            cout<<"\tGot 5 !!\t";
            continue;
        }
        else{
            cout<<i;
        }
    }
}