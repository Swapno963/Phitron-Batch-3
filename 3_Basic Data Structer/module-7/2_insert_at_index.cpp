#include<bits/stdc++.h>
using namespace std;

// creatin node
class Node
{
    public:
        int val;
        Node *next;
    Node(int v)
    {
        this->val = v;
        this->next = NULL;
    }

};

// return node size
int size(Node * head)
{
    Node * tem = head;
    int count = 0;
    while(tem != NULL)
    {
        count++;
        tem = tem->next;
    }
    return count;
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

// insert at index
void insert(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tem = head;
    for(int i=1; i<pos-1; i++)
    {
        tem = tem->next;
    }
    newNode->next = tem->next;
    tem->next = newNode;
}



int main()
{
    // create node
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    
    // link nodes
    head->next = a;
    a->next = b;
    b->next = c;

    // print node
    print_node(head);

    // 
    int pos,v;
    cin >>pos >>v;
    if(pos > size(head))
    {
        cout << "Invalid index" << endl;
    }
    else
    {
        insert(head, pos, v);
         // print node
        print_node(head);
    }
    
    return 0;
}