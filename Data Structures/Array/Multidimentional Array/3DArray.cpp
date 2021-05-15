// int[2][3][3] -> Two array with 3 rows and 3 columns

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arr[2][3][3] = {    {{3,4,5},{9,8,7},{0,1,3}},
                            {{43,5,67},{98,66,32},{97,67,43}}
                        };
    cout<<"Accessing all element: ";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                cout<<arr[i][j][k]<<" ";
            }
        }
    }

}