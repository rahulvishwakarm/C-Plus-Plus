#include<iostream>
#include<conio.h>
#define MAX 5
using namespace std;

class Stack
{
    int top;
    public:
        int array[MAX];
        Stack()
        {
            top = -1;
        }
        bool push(int x);
        int pop();
        int display();
};

bool Stack::push(int item)
{
    if(top==MAX-1)
    {
        cout<<"Stack is full, Overflow!!";
        return false;
    }
    else
    {
        top++;
        array[top] = item;
        return true;
    }
}

int Stack::pop()
{
    if(top==-1)
    {
        cout<<"Stack is Empty, Underflow!!";
        return 0;
    }
    else
    {
        cout<<"Popped Element: "<<array[top]<<endl;
        top--;
        return 1;
    }
}

int Stack::display()
{
    cout<<"Elements: ";
    for(int i=top;i>=0;i--)
    {
        cout<<array[i]<<"\t";
    }
    cout<<"\n";
    return 0;
}

int main()
{
    class Stack stack;
    stack.push(11);
    stack.push(22);
    stack.push(33);
    stack.push(44);
    stack.display();
    stack.pop();
    stack.pop();
    stack.display();
}


