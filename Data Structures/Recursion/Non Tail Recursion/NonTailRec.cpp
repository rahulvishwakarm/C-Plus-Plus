// Recursion is said to be Non Tail Recursion if the recursive call is not the last thii=ng return by the function
// Function will excute some task after return 

#include<iostream>
#include<conio.h>
using namespace std;

int fun(int);

int fun(int n)
{
    if(n==0)
    {
        return 0;
    }
    fun(n-1);
    cout<<n;
}

int main()
{
    fun(3);
}