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
     cout << endl;
}

// insert between head and tail,
void insert_at_position(Node *head,int val, int pos)
{
    Node *newNode = new Node(val);
    Node *tem = head;
    for(int i=1; i<pos; i++)
    {
        tem = tem ->next;
    }
    // 10 20 30 40  (2,100) 2 index a 100 add korta hoeb
    // 20 = tem; newNode = 100;
    newNode->next = tem->next; // new node(100) ar next a 20 ar next 30 raklam
    tem->next = newNode; // 20 ar next a new node 100 raklam
    newNode->next->prev = newNode;  // tem 20, ar next 30, ar previous a new node 100
    newNode->prev = tem;

}

// insert at head
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}

// insert at tail 
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
// get size
int get_size(Node *head)
{
    Node *tem = head;
    int count = 0;
    while(tem != NULL)
    {
        count++;
        tem = tem->next;
    }
    return count;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    /*
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
    */
    

    // calling funciton
    print_normal(head);
    print_reverse(tail);

    // user input of value and positon
    int val, pos;
    cin >> val >> pos;
    if(pos == 0)
    {
        // cout << "Can't insert at head !\n";
        insert_at_head(head,tail,val);
    }
    else if(pos >= get_size(head))
    {
        cout << "Can't insert at tail or further !\n";
    }
    else 
    {
        insert_at_position(head,val,pos);

    }
    
    print_normal(head);
    print_reverse(tail);
    return 0;
}