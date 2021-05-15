// Write the program to check whether any of the digits in a number apperars more than once
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arr[] = {3,4,6,8,9,5,3,3};
    cout<<"Which number do you want to search in an array arr: ";
    int srch;
    cin>>srch;
    int count=0;
    int length = sizeof(arr)/sizeof(int);
    for(int i=0;i<length;i++)
    {
        if(arr[i]==srch)
        {
            count=count+1;
        }
    }
    cout<<srch<<" is repeated "<<count<<" times";
}