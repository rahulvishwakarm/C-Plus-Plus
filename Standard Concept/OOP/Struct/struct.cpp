#include<iostream>
#include<conio.h>
using namespace std;

// Struct - struct is used to define the variable with different data type
struct Reactangle
{
    int width,height;
    string name;
};

int main(void)
{
    struct Reactangle rec;
    rec.width = 12;
    rec.height = 27;
    rec.name = "Testing";
    cout<<"Area of Reactangle: "<<(rec.width*rec.height)<<endl;
    cout<<"Name: "<<(rec.name)<<endl;
    return 0;
}