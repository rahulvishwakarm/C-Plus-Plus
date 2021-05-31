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
    
    // Creating the node
    struct Node *first = new Node();
    first->data = 11;
    head = first;
    first->next = head;
    
    // Travserse List
    struct Node *ptr = head->next;
    do
    {
        printf("%d",ptr->data);
        ptr = ptr->next;
    }
    while((ptr!=head->next));
}