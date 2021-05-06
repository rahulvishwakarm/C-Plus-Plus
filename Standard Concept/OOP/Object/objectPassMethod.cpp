// // Display Data through method
#include<iostream>
#include<conio.h>
using namespace std;

class Student {
    public:
    int id;
    string name;

    void insert(int i, string n)
    {
        id = i;
        name = n;
    }

    void display()
    {
        cout<<id<<" "<<name<<endl;
    }

};

int main()
{
    Student s1;
    Student s2;
    s1.insert(615,"Rahul");
    s2.insert(684,"Aman");
    s1.display();
    s2.display();
}