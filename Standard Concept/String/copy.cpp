#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

int main()
{
    char key[25];
    char buffer[25];
    cout<<"Enter key: ";
    cin>>key;
    cout<<"Enter buffer: ";
    cin>>buffer;
    cout<<"key: "<<key<<endl;
    cout<<"buffer: "<<buffer<<endl;
    strcpy(buffer,key);    // copy value of key in buffer
    cout<<"After copy key: "<<key<<endl;
    cout<<"After copy buffer: "<<buffer<<endl;
    return 0;
}