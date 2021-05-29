#include<iostream>
#include<conio.h>
using namespace std;

class Node
{
    public: 
    int data;
    Node *next;
};

int main()
{
    Node *head = NULL;

    // Node Creation
    Node *first = new Node();
    first->data = 11;
    head = first;
    first->next = head;

    // Traversing 
    Node *ptr = head->next;
    do
    {
        cout<<ptr->data;
        ptr = ptr->next;
    }
    while(ptr!=head->next);
}