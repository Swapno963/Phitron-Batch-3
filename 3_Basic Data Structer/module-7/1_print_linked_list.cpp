#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;
    Node(int v)
    {
        this->val = v;
        this->next = NULL;
    }

};

// print node untill NULL
void print_node(Node * head)
{
    Node * tem = head;
    while(tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
}
int main()
{
    // create node
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    
    // link nodes
    head->next = a;
    a->next = b;
    b->next = c;

    // print node
    print_node(head);
    return 0;
}