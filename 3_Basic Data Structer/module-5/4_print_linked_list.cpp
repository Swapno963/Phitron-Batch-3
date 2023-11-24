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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
// This is not good approch, because hear our head is moving and went to null, so after printing it we  can't access any of those element
/*
    while(head != NULL)
    {
        cout << head->val <<endl;
        head = head->next;
    }

      while(head != NULL)
    {
        cout << head->val <<endl;
        head = head->next;
    }
*/

// rather
    Node *tem = head;
    while(tem->next != NULL)
    {
        cout << tem->val << endl;
        tem = tem->next;
    }

    tem = head; // hear we are saying start again with head
    // while(tem != NULL)
    // {
    //     cout << tem->val << endl;
    //     tem = tem->next;
    // }

    return 0;
}