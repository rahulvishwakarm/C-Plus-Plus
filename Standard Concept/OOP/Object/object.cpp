#include<iostream>
#include<conio.h>
using namespace std;

class Student {
    public:
    int id;
    float salary = 80000;
    string name;

};

int main()
{
    Student std1; //Creating Object
    std1.id=364643;
    std1.name = "Test Name";
    cout<<std1.id<<endl;
    cout<<std1.name<<endl;
    cout<<std1.salary<<endl;
}