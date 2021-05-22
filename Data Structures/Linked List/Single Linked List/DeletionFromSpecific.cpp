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
    // Creating and putting value in node

    Node *head = new Node();
    head->data = 11;
    head->next = NULL;

    Node *second = new Node();
    second->data = 22;
    second->next = NULL;

    Node *third = new Node();
    third->data = 33;
    third->next = NULL;

    Node *fourth = new Node();
    fourth->data = 44;
    fourth->next = NULL;

    Node *fifth = new Node();
    fifth->data = 55;
    fifth->next = NULL;

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

    // Traversing the list
    Node *ptr1 = head;
    while (ptr1!=NULL)
    {
        cout<<ptr1->data<<"\t";
        ptr1 = ptr1->next;
    }

    cout<<"\n";

    // Deleting the node
    cout<<"Which node do you want to delete?: ";
    int NTD;
    cin>>NTD;
    Node *point = head;
    Node *pnt;

    for(int i=1;point!=NULL && i<NTD-1; i++) {
        point=point->next;
    }
    if(point==NULL || point->next==NULL) {
        cout<<"At the end of node, Will not delete last node!!";
    }
    pnt = point->next->next;
    point->next = NULL;
    point->next = pnt;

    // Traversing the list
    Node *ptr2 = head;
    while (ptr2!=NULL)
    {
        cout<<ptr2->data<<"\t";
        ptr2 = ptr2->next;
    }
}