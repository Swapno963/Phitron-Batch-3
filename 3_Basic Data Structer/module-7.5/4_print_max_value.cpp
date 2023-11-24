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


// return the maxium num
int return_max(Node *head)
{
    Node *tem = head;
    int mx = tem->val;
    while(tem != NULL)
    {
        if(mx < tem->val)
        {
            mx = tem->val;
        }
        tem = tem->next;
    }
    return mx;
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

    //print_linkedlist(head);
    cout <<"The maxium is : " << return_max(head);
    return 0;
}