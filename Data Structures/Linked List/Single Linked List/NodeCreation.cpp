// #include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

class Node {
    public:
        int data;
        Node* link;
};

int main()
{
    Node* head = NULL;
    head = new Node();
    head->data = 45;  // Node First Part -> Value
    head->link = NULL;  // Node Second Part -> NULL
    cout<<head->data;
    return 0;
}