#include<iostream>
#include<conio.h>
using namespace std;

class Employee {
    public:
    int id;
    string name;
    float salary;
    Employee(int i,string n,float s)
    {
        id = i;
        name = n;
        salary = s;
    }

    void display() {
        cout<<"Employee Id: "<<id<<"\t";
        cout<<"Empoyee Name: "<<name<<"\t";
        cout<<"Employee Salary: "<<salary<<"\t";
        cout<<"\n";
    }
};

int main()
{
    Employee e1 = Employee(536,"Emplyee 1",49000);
    Employee e2 = Employee(615,"Emplyee 2",69000);
    e1.display();
    e2.display();
}