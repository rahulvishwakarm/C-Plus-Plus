#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    cout<<"Nested Loop";
    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) {
            cout<<(i+j)<<endl;
        }
    }
    getch();
}