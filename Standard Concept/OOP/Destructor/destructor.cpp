//Deconstructor is create by ~ prefix

#include<iostream>
#include<conio.h>
using namespace std;

class Student {
    public:
    Student() {
        cout<<"Constrcutor Invoked\t";
    }
    ~Student() {
        cout<<"Destructor Invoked";
    }
    
};

int main()
{
    Student s1;
}