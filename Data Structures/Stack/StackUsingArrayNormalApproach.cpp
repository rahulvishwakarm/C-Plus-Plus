#include<iostream>
#include<conio.h>
using namespace std;
#define MAx 5 

int arr[MAx];
int top=-1;
void push();
void pop();
void display();
int main()
{
    cout<<"1. PUSH or Insert"<<endl;
    cout<<"2. POP or Delete"<<endl;
    cout<<"3. Display"<<endl;
    cout<<"4. Exit"<<endl;

    while(1)
    {
        int ch;
        cout<<"Enter the Choise: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                exit(0);
            }
            default:
            {
                cout<<"Invalid Input!!";
            }
        }
    }
}

void push()
{
    if(top==MAx-1)
    {
        cout<<"Stack is full, Overflow!!"<<endl;
    }
    else
    {
        int data;
        cout<<"Enter the input data: ";
        cin>>data;
        top++;
        arr[top]=data;
    }
}

void pop()
{
    if(top==-1)
    {
        cout<<"Stack is empty, Underflow!!"<<endl;
    }
    else
    {
        cout<<"Pooped Element: "<<arr[top]<<"\t";
        top--;
    }
}

void display()
{
    if(top>=0)
    {
        cout<<"Elements: ";
        for(int i=top;i>=0;i--)
        {
            cout<<arr[i]<<"\t";
        }
    }
    else
    {
        cout<<"Stack is empty!!"<<endl;
    }
    cout<<"endl";
}