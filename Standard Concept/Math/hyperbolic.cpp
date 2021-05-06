// Mathematically
// coshx = ex+ e-x/2

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
    int x=45;
    float rdn = x*3.142/180;
    cout<<"cosh hyperbola: "<<cosh(rdn)<<endl;
    cout<<"sinh hyperbola: "<<sinh(rdn)<<endl;
    cout<<"tanh hyperbola: "<<tanh(rdn)<<endl;
    cout<<"Inverse cosh hyperbola: "<<acosh(rdn)<<endl;
    cout<<"Inverse cosh hyperbola: "<<asinh(rdn)<<endl;
    cout<<"Inverse cosh hyperbola: "<<atanh(rdn)<<endl;
}