#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node(int vl)
        {
            this->val = vl;
            this->next = NULL;
        }
};

// print element
void print_recursive(Node *n)
{
    // base case
    if(n == NULL) return;

    // work
    print_recursive(n->next);
    cout << n->val << " ";
}
int main()
{
     Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    
    // link nodes
    Node *tail = d;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = tail;

    print_recursive(head);
    return 0;
}