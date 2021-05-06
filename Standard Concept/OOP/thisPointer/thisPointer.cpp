#include<iostream>
#include<conio.h>
using namespace std;

class Employee {
    public:
        int id;
        string name;
        float salary;
        Employee(int i,string n,float f) {
            this->id=i;
            this->name=n;
            this->salary=f;
        }

        void display() {
            cout<<id<<" "<<name<<" "<<salary<<endl;
        }
};

int main()
{
    Employee e1 = Employee(6541,"Allan",56000);
    e1.display();
}