#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class Student{
    public:
        int rollNo = 864;
};

class FinalStudent:public Student {
    public:
        string name = "Closis Memon";
};

int main()
{
    FinalStudent fs;
    cout<<"Student Roll No: "<<fs.rollNo<<endl;
    cout<<"Student Name: "<<fs.name;
    return 0;
}