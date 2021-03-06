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
    Node *link =new Node();
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

void insertAtEnd(int IE)
{
    Node *instAtEndNode = new Node();
    instAtEndNode->data = IE;
    instAtEndNode->prev = NULL;
    instAtEndNode->next = NULL;

    Node *keeptrack = head;
    
    while (keeptrack->next!=NULL)
    {
        keeptrack = keeptrack->next;
    }
    keeptrack->next = instAtEndNode;
    instAtEndNode->prev = keeptrack;
};

void printList()
{
    Node *ptr = head;
    cout<<"[head]";
    while(ptr->next!=NULL)
    {
        cout<<"<=>"<<ptr->data;
        ptr= ptr->next;
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
    insertAtEnd(66);
    printList();
}