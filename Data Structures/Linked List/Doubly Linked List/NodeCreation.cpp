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

int main()
{
    Node *head = new Node();
    head->prev = NULL;
    head->data = 11;
    head->next = NULL;
}