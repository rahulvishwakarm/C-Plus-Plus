#include<iostream>
#include<conio.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
        Node *prev;
};

int main()
{
    Node *head = NULL;
    Node *last = NULL;
    Node *current = NULL;

    // Node Creation
    int d;
    cout<<"Enter the data for Node 1: ";
    cin>>d;
    Node *link = new Node();
    link->data = d;
    link->next = NULL;
    link->prev = NULL;

    // Node Insertion
    if(head==NULL)
    {
        head = link;
    }
    last = link;
    link->prev = head;

    // Traversing the List
    Node *ptr = head;
    cout<<"[head]";
    while (ptr->next!=NULL)
    {
        cout<<"<=>"<<ptr->data;
        ptr=ptr->next;
    }
    cout<<"<=>"<<ptr->data;
    cout<<"<=>[head]";
}
