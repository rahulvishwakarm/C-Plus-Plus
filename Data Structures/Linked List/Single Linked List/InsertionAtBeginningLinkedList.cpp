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

    head->data = 22;
    head->next = NULL;

    second->data = 33;
    second->next = NULL;

    third->data = 44;
    third->next = NULL;

    head->next = second;
    second->next = third;

    // Creating the node to be inserted
    Node *zero = NULL;
    zero = new Node();
    zero->data = 11;

    // Inserting the node
    zero->next = head;
    head = zero;

    // Traversing an array
    Node *point = head;
    int count = 0;
    while (point!=NULL)
    {
        cout<<point->data<<"\t";
        count++;
        point = point->next;
    }
    cout<<"No of node: "<<count;
}