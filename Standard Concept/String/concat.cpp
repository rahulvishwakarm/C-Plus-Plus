#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

int main()
{
    char key[25],buffer[25];
    cout<<"Enter the key string: ";
    cin>>key;
    cout<<"Enter buffer string: ";
    cin>>buffer;
    strcat(key,buffer);
    cout<<"key: "<<key<<endl;
    cout<<"buffer: "<<buffer<<endl;
    return 0;
}