#include<iostream>
#include<conio.h>
using namespace std;

float division(int x,int y)
{
    if(y==0) {
        throw "Zero Division Error";
    }
    return x/y;
};

int main()
{
    int i=25;
    int j=0;
    float k;
    try
    {
        k = division(i,j);
        cout<<"k"<<endl;
    }
    catch(const char *e) {
        cerr<<e<<endl;
    }
    return 0;
}