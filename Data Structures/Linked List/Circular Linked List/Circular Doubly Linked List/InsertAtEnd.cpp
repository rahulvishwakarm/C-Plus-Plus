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

Node *addToNull(Node *head,int data)
{
    if(head!=NULL)
    {
        return head;
    }
    Node *lnk = new Node();
    lnk->data = data;
    lnk->next = NULL;
    lnk->prev = NULL;
    head = lnk;
    lnk->next = head;
    lnk->prev = lnk->next;
    return head;
};

Node *addAtBeginning(Node *head,int data)
{
    if(head==NULL)
    {
        cout<<"Linked List is empty";
        return addToNull(head,data);
    }
    Node *lnk = new Node();
    lnk->data = data;
    lnk->next = head;
    lnk->prev = head;
    head->next = lnk;
    head->prev = lnk;
    return head;
};

Node *addAtEnd(Node *head,int data)
{
    Node *lnk = new Node();
    lnk->data = data;
    Node *ptr = head->next;
    lnk->next = ptr;
    lnk->prev = head;
    head->next = lnk;
    ptr->prev = lnk;
    head = lnk;
    return head;
}

void traverse(Node *head)
{
    Node *ptr = head->next;
    cout<<"[head]<=>";
    do
    {
        cout<<ptr->data<<"<=>";
        ptr = ptr->next;
    } while (ptr!=head->next);
    cout<<"[head]";
}

int main()
{
    Node *head = NULL;
    head = addToNull(head,22);
    head = addAtBeginning(head,11);
    head = addAtEnd(head,33);
    traverse(head);
}