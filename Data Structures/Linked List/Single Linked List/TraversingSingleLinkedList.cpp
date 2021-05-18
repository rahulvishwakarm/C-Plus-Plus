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

    head->data = 34;
    head->next = NULL;

    second->data = 67;
    second->next = NULL;

    third->data = 98;
    third->next = NULL;

    head->next = second;
    second->next = third;

    // Traversing the list;
    Node *n = head;
    int count = 0;
    while (n!=NULL)
    {
        cout<<n->data;
        count++;
        n = n->next;
    }
    cout<<"No of nodes: "<<count;
}