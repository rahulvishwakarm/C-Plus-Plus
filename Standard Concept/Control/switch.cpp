#include<iostream>
#include<conio.h>

using namespace  std;

int main()
{
    const char *grade = "O";
    switch(*grade) {
        case 'O':
            cout<<"Out Standing";
            break;
        case 'A':
            cout<<"Very Good";
            break;
        case 'B':
            cout<<"Good";
            break;
        default:
            cout<<"either A+ or B+";
            break;
    }
}