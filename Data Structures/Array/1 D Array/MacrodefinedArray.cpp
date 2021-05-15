#include<iostream>
#include<conio.h>
#define N 5
using namespace std;

int main()
{
    // Initializing an array
    int arr[N];

    // Assigning the value to an element in an array
    for(int i=0;i<N;i++)
    {
        cout<<"Enter the element at index: "<<i<<": ";
        cin>>arr[i];
    }

    // Acessing the elemnet of an array
    cout<<"Elements in an array are: ";
    for(int j=0;j<N;j++)
    {
        cout<<arr[j]<<"\t";
    }
}