#include<iostream>
#include<conio.h>
using namespace std;

class Node
{
    public: 
    int data;
    Node *next;
};

Node *addToNull(struct Node *head,int d)
{
    if (head != NULL)
        return head;
    struct Node *lnk = new Node();
    lnk->data = d;
    head = lnk;
    head->next = head;
    return head;
};

Node *addToBeginning(struct Node *head,int d)
{
    if(head = NULL)
    {
        return addToNull(head,d);
    }
    struct Node *lnk = new Node();
    lnk->data = d;
    lnk->next = head->next;
    head->next = lnk;
    return head;
};

void traverse(Node *head)
{
    Node *ptr;
    if (head == NULL)
    {
        printf("List is empty.");
        return;
    }
    do
    {
        printf("%d",ptr->data); 
        ptr = ptr->next;
    }
    while(ptr!=head->next);
};

int main()
{
    Node *head = NULL;
    head = addToNull(head,22);
    head = addToBeginning(head,11);
    traverse(head);
    return 0;
}