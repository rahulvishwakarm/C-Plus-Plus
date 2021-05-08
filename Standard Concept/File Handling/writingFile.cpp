//Note
/*

1. fstream - It is used to create files, write information and read information from files
2. ifstream - It is used to read information from file
3. ofstream - It is used to create files and write information to the files

*/


#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream filestream("testout.txt"); //craete if not present or open the file
    if(filestream.is_open())
    {
        filestream << "Welcome to File System\n";
        filestream << "Welcome to Next Line in File System";
        cout<<"Writing SucessFull!!";
        filestream.close();
    }
    else cout<<"File Opening Failed!!";
    return 0;
}