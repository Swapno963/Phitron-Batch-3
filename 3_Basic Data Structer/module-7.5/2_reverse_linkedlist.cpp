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

// insert linked list
void insert_linkedlist(Node *&head, Node *&tail, int val)
{
    Node * newNode = new Node(val);
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
        cout << tem->val << " ";
        tem = tem->next;
    }
}

// print in reverse way
void reverse_linkedlist(Node *head)
{
    // base case
    Node *tem = head;
    if(tem == NULL)
    {
        return;
    }

    reverse_linkedlist(tem->next);
    cout << tem->val << " ";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while(true)
    {
        int val;
        cin >>val;
        if(val == -1)
        {
            break;
        }
        insert_linkedlist(head, tail,val);
    }
    //print_linkedlist(head);

    // print list in reverse way
    reverse_linkedlist(head);

    return 0;
}