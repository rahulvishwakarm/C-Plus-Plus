#include<iostream>
#include<stdlib.h>
using namespace std;

class Stack
{
    public:
        int data;
        Stack *next;
};

Stack *top;

void push(int dt)
{
    Stack *temp = new Stack();
    if(!temp)
    {
        cout<<"Overflow!!";
    }
    else
    {
        temp->data = dt;
        temp->next = top;
        top = temp;
    }
};

void pop()
{
    Stack *temp;
    if(top==NULL)
    {
        cout<<"\nUnderflow!!\n";
    }
    else
    {
        temp = top;
        top = top->next;
        temp->next = NULL;
        free(temp);
    }
}

void peek()
{
    if(top==NULL)
    {
        cout<<"Stack is Empty!!";
    }
    else
    {
        cout<<top->data;
    }
}

void display()
{
    Stack *temp;
    if(top==NULL)
    {
        cout<<"Stack Overflow!!";
        exit(1);
    }
    else
    {
        temp = top;
        while (temp!=NULL)
        {
            cout<<temp->data<<"\n";
            temp = temp->next;
        }
        cout<<"[Stack End]";
    }
}

int main()
{
    push(11);
    push(22);
    push(33);
    push(44);
    cout<<"Stack Before pop:\n";
    display();
    pop();
    pop();
    cout<<"\nStack After pop: \n";
    display();
}