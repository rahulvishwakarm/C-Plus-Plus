#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arr[5] = {32,5,65,12,54};

    cout<<"Traversing Using For Loop\n";
    for(int i=0;i<5;i++) {  // For Loop
        cout<<arr[i]<<"\t";
    }

    cout<<"\nTraversing Using For Each loop\n";
    for(int j:arr) {  // For Each
        cout<<j<<"\t";
    }
}