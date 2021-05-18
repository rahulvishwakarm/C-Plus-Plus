#include<iostream>
#include<conio.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
};

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 53;
    head->next = NULL;

    second->data = 78;
    second->next = NULL;

    third->data = 98;
    third->next = NULL;

    head->next = second;
    second->next = third;

    // Creating the node to be inserted
    Node *fourth = NULL;
    fourth = new Node();

    fourth->data = 99;
    fourth->next = NULL;

    Node *ptr = head;
    while (ptr->next!=NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = fourth;


    // Traversing an List
    Node *point = head;
    int count = 0;
    while (point!=NULL)
    {
        cout<<point->data<<"\t";
        count++;
        point = point->next;
    }
    cout<<endl;
    cout<<"No of node: "<<count;
}