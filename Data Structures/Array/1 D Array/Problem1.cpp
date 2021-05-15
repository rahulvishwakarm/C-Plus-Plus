// Write the program to reverse the following given sequence in an array
// 34 56 54 32 67 89 90 32 21

#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

int main()
{
    int arr[] = {34,56,54,32,67,89,90,32,21};
    int length = sizeof(arr)/sizeof(int);

    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

    for (int j = length-1; j >=0; j--)
    {
        cout<<arr[j]<<"\t";
    }
    
}