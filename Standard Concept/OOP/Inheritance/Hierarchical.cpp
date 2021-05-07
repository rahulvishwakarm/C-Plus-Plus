#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

class Dimension
{
    public:
        int length = 42;
        int breadth = 19;
        double radius = 4;
        double pi = 3.14;
};

class Rectangle:public Dimension
{
    public:
        void area_rect() {
            cout<<"Area of rectangle is: "<<length*breadth<<endl;
        }
};

class Circle: public Dimension
{
    public:
        void area_circle() {
            cout<<"Area of circle is: "<<pi*pow(radius,2)<<endl;
        }
};

int main()
{
    Circle  C = Circle();
    Rectangle R = Rectangle();
    C.area_circle();
    R.area_rect();
}