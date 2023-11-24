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

// take input
void insert_linkedlist(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

// print linked list
void print_linkedlist(Node *head)
{
    Node *tem = head;
    while(tem != NULL)
    {
        cout << tem->val <<" ";
        tem = tem->next;
    }
}

void arrange_desending_way(Node *& head)
{
    for(Node *i = head; i->next != NULL; i = i->next)
    {
        for(Node *j = i->next; j != NULL; j = j->next)
        {
            if(i->val < j->val)
            {
                swap(i->val,j->val);
            }
            //cout << i->val <<" " << j->val <<endl;
        }
    }
}

int main()
{
     Node *head = NULL;
    Node *tail = NULL;

    while(true)
    {
        int x; cin >> x;
        if(x == -1)
        {
            break;
        }
        insert_linkedlist(head,tail,x);
    }

    print_linkedlist(head);
    arrange_desending_way(head);
    return 0;
}