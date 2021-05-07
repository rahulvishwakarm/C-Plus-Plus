#include<iostream>
#include<conio.h>
using namespace std;

// Interfaces (Abstract class) - It is the way to achieve the abstraction
// Abstraction - Abstraction is the process of hiding the internal detail and showing functionalty only

class Shape
{
    public:
        virtual void draw()=0;
};

class Rectangle: public Shape
{
    public:
        void draw()
        {
            cout<<"Drawing Rectangle.."<<endl;
        }
};

class Circle: public Shape
{
    public:
        void draw()
        {
            cout<<"Drawing Circle.."<<endl;
        }
};

int main()
{
    Rectangle R = Rectangle();
    Circle C = Circle();
    R.draw();
    C.draw();
}