#include<iostream>
#include<conio.h>
using namespace std;

class Node
{
    public: 
    int data;
    Node *next;
};

Node *addToNull(Node *head,int d)
{
    if (head != NULL)
        return head;
    struct Node *lnk = new Node();
    lnk->data = d;
    head = lnk;
    head->next = head;
    return head;
};

Node *addToBeginning(Node *head,int d)
{
    if(head == NULL)
    {
        return addToNull(head,d);
    }
    struct Node *lnk = new Node();
    lnk->data = d;
    lnk->next = head->next;
    head->next = lnk;
    return head;
};

Node *addToEnd(Node *head,int d)
{
    if(head==NULL)
    {
        printf("Linked List is Empty!!");
    };
    Node *lnk = new Node();
    lnk->data = d;
    lnk->next = head->next;
    head->next = lnk;
    head = lnk;
    return head;
};

Node *InsertAfter(Node *head,int data)
{
    Node *lnk = new Node();
    lnk->data = data;
    int aftrnode;
    cout<<"After which node do you want to insert this node: ";
    cin>>aftrnode;
    struct Node *ptr = head;
    for(int i=0;i<aftrnode;i++)
    {
        ptr = ptr->next;
    }
    lnk->next = ptr->next;
    ptr->next = lnk;
    return head;
};

void traverse(Node *head)
{
    Node *ptr = head->next;
    if (head == NULL)
    {
        cout<<"List is empty.";
        return;
    }
    cout<<"[head]->";
    do
    {
        cout<<ptr->data<<"->"; 
        ptr = ptr->next;
    }
    while(ptr!=head->next);
    cout<<"[head]";
};

int main()
{
    Node *head = NULL;
    head = addToNull(head,22);
    head = addToBeginning(head,11);
    head = addToEnd(head,33);
    head = InsertAfter(head,19);
    traverse(head);
    return 0;
}