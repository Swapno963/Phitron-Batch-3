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

// insert at tail
void insrt_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

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

//sort




int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
         insrt_at_tail(head,tail,val);
        
    }
    //print_node(head);

    for(Node *i = head; i->next != NULL; i=i->next)
    {
        for(Node *j = i->next; j != NULL; j = j->next)
        {
            // cout << i->val << " " << j->val << endl;
            if(i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
        // cout << endl;
    }

    print_node(head);
    return 0;
}