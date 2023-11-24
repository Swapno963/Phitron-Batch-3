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

// insert at head and tail
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

// take input
void take_input(Node *&head, Node *&tail)
{
  
    while(true)
    {
        int x;
        cin >>x;
        if(x == -1)
        {
            break;
        }
        insert_at_tail(head, tail, x);
    }
}

// print linked list
void print_linked_list(Node *head)
{
    Node *tem = head;
    while(tem != NULL)
    {
        cout << tem->val <<" ";  
        tem = tem->next;
    }
}


// get size
int get_size(Node *head)
{
    Node *tem = head;
    int cout = 0;
    while(tem != NULL)
    {
        cout++;
        tem = tem->next;
    }
    return cout;
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    
    // take first lined list 
    cout << "Enter first linked list : ";
    take_input(head, tail);
    // take second linked list
    cout << "Enter second linked list : ";
    take_input(head2, tail2);
    //print_linked_list(head);
    if(get_size(head) == get_size(head2))
    {
        cout << "YES" <<endl;
    }
    else{
        cout <<"NO"<<endl;
    }
    //cout << "your linkedlist size is" << get_size(head) ;
    return 0;
}