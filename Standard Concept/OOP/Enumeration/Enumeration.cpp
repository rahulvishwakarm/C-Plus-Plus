#include<iostream>
#include<conio.h>
using namespace std;

// Enumerate - Enumerate is datatype that is used to store set of data

enum week {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};

int main()
{
    week day;
    day = Friday;
    cout<<day<<endl;
    cout<<"Day: "<<day+1<<endl;
    return 0;
}