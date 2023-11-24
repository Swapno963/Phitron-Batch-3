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

// insert element at head
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    newNode->next = head;
    head = newNode;
}

// insert element at tail
void insert_at_tail(Node *&head, Node *&tail, int val)
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

// print head and tail
void get_head_tail(Node *&head, Node *&tail)
{
    cout <<head->val <<" " << tail->val <<endl;
}

// print node element
void print_element(Node *head)
{
    Node *tem = head;
    while( tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
}
int main()
{
    int query;
    cin >>query;
    Node *head = NULL;
    Node *tail = NULL;
    for(int i=0; i<query; i++)
    {
      
        int head_or_tail,val;
        cin >> head_or_tail;
        cin >> val;

        // inserting linkedlist element
        if(head_or_tail == 0)
        {
            insert_at_head(head,tail,val);
        }
        else{
            insert_at_tail(head,tail,val);
        }

        // time to print head and tial
        get_head_tail(head,tail);
   }
    // print_element(head);

    return 0;
}