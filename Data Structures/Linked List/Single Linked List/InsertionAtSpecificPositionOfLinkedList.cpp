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
    Node *second =  new Node();
    Node *third = new Node();

    head->data= 11;
    head->next = NULL;
    second->data = 22;
    second->next = NULL;
    third->data = 33;
    third->next = NULL;
    head->next = second;
    second->next = third;
    
    // creating the node to be inserted
    Node *fourth = new Node();
    fourth->data = 25;
    fourth->next = NULL;

    cout<<"At which position do you want to insert node: ";
    int ins_pos;
    cin>>ins_pos;

    Node *ptr = head;

    for (int i = 1; i < ins_pos; i++)
    {
        ptr = ptr->next;
        if(ptr->next ==NULL) {
            cout<<"Position not found to insert!!\n"<<endl;
            cout<<"Reached at the End, Use end insertion algorithm!!";
        }
    }
    fourth->next = ptr->next;
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
}