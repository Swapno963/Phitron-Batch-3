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

// reverse dubpy linked list
void reverse_doubly(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while(i != j && i->next != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = tail;
    tail->prev = b;
    
    reverse_doubly(head,tail);
    print_normal(head);
    return 0;

}