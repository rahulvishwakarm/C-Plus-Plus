//Recursion - Calling function with in function is called function

#include<iostream>
#include<conio.h>
using namespace std;

void function1()
{
    cout<<"Entered into functioon 1\t";
}

void function2()
{
    cout<<"Entered into fucntion 2\t";
}

int main()
{
    int factorial(int);
    int fact,value;
    cout<<"Enter the number: ";
    cin>>value;
    fact = factorial(value);
    cout<<"Factorial of a number is: "<<fact<<endl;
    return 0;
}

int factorial(int n)
{
    if(n<0) {
        return(-1);
    }
    if(n==0) {
        return(1);
    }
    else
    {
        return (n*factorial(n-1));  // Recursion
    }
}