#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node *prev;
        Node(int vl)
        {
            this->val = vl;
            this->next = NULL;
            this->prev = NULL;
        }
};

// printing in normal order
void print_normal(Node *head)
{
    Node *tem = head;
    while(tem !=NULL)
    {
        cout << tem->val <<" ";
        tem = tem->next;
    }
    cout << endl;
}

// printing reverse order
void print_reverse(Node * tail)
{
    Node *tem = tail;
    while(tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->prev;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    

    // calling funciton
    print_normal(head);
    print_reverse(c);
    return 0;
}