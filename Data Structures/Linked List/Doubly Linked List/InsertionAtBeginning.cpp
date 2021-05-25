#include<iostream>
#include<conio.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node *prev;
};

Node *head = NULL;
Node *first = NULL;
Node *last = NULL;
Node *current = NULL;

void insert(int d)
{
    Node *link = new Node();
    link->data = d;
    link->next = NULL;
    link->prev = NULL;

    if(head == NULL)
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

void inserAtBeginning(int bd)
{
    Node *instbegnode = new Node();
    instbegnode->data = bd;
    instbegnode->next = NULL;
    instbegnode->prev = NULL;

    Node *insertbeg = NULL;
    if(head==NULL)
    {
        first = instbegnode;
        first = head;
        last = head;
    }
    else
    {
        insertbeg = instbegnode;
        insertbeg->next = head;
        head->prev = insertbeg; // this line start inserting the node
        head = insertbeg; // pointing node to head
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
    inserAtBeginning(10);
    printList();
}