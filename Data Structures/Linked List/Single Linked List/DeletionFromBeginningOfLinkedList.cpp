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
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->data = 11;
    head->next = NULL;

    second->data = 22;
    second->next = NULL;

    third->data = 33;
    third->next = NULL;

    head->next = second;
    second->next = third;
    
    // Traversing the node
    Node *ptr1 = head;
    while(ptr1!=NULL) {
        cout<<ptr1->data<<"\t";
        ptr1 = ptr1->next;
    }

    // Deleting the Node
    Node *temp = head;
    head = head->next;
    delete temp;
    cout<<"\n";

    // Traversing the node
    Node *ptr2 = head;
    while(ptr2!=NULL) {
        cout<<ptr2->data<<"\t";
        ptr2 = ptr2->next;
    }
}