#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arr[2][3] = {{3,4,6},{7,5,3}};
    
    cout<<"Accessing all element: ";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }

}