#include<iostream>
#include<conio.h>
using namespace std;

void printFunction(int arr[5]) {
    cout<<"\nPrinting the Array:"<<endl;
    for(int i=0;i<5;i++) {
        cout<<arr[i]<<"\t";
    }
}

int main() {
    int arr1[5] = {12,5,43,56,32};
    int arr2[5] = {54,11,3,567,76};
    printFunction(arr1);
    printFunction(arr2);
}