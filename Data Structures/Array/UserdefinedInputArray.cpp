#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // Initializing an Array
    int siz;
    cout<<"Enter the size of an array: ";
    cin>>siz;
    int arr[siz];

    // Assigning the values to an array element
    for(int i=0;i<siz;i++)
    {
        cout<<"Enter the element of index "<<i<<": ";
        cin>>arr[i];
    }

    // Acessing the value of an elment in an array
    cout<<"Element in an array are: ";
    for(int j=0;j<siz;j++)
    {
        cout<<arr[j]<<"\t";
    }

}