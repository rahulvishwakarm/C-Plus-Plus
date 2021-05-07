
// namespace in c++ are used to organize too many classes so that it can be easy to handle the application

#include<iostream>
#include<conio.h>
using namespace std;

namespace First {
    void sayHello()
    {
        cout<<"This is first Namespace"<<endl;
    }
}

namespace Second {
    void sayNewHello()
    {
        cout<<"This is second Namespace"<<endl;
    }
}


using namespace First;
int main()
{
    sayHello();
    return 0;
}