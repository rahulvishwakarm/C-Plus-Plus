#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{
    string srg;
    ifstream filestream("testout.txt");
    if (filestream.is_open())
    {
        while (getline(filestream,srg))
        {
            cout<<srg<<endl;
        }
        filestream.close();
    }
    else
    {
        cout<<"FIle Opening Failed!!";
    }
    return 0;
}