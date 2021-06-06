#include<iostream>
#include<conio.h>
using namespace std;

class Node
{   
    public:
        int data;
        Node *prev;
        Node *next;
};

Node *head = NULL;
Node *last = NULL;
Node *current = NULL;

void insert(int d)
{
    Node *link = new Node();
    link->data = d;
    link->prev = NULL;
    link->next = NULL;

    if(head==NULL)
    {
        head = link;
        return;
    }
    current = head;

    while (current->next!=NULL)
    {
        current = current->next;
    }
    current->next = link;
    last = link;
    link->prev = current;
};

void deleteFromBeg()
{   
    if(head==NULL)
    {
        cout<<"Linked List is empty!!";
    }
    else
    {
        Node *ptr = head;
        head = head->next;
        head->prev = NULL;
    }
};

void printList()
{
    Node *ptr = head;
    cout<<"[head]";
    while (ptr->next!=NULL)
    {
        cout<<"<=>"<<ptr->data;
        ptr = ptr->next;    
    }
    cout<<"<=>"<<ptr->data;
    cout<<"<=>[head]\n";
};

int main()
{
    insert(11);
    insert(22);
    insert(33);
    insert(44);
    insert(55);
    printList();
    deleteFromBeg();
    printList();
}