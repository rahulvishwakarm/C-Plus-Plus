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
    head = addToNull(head,11);
    traverse(head);
}