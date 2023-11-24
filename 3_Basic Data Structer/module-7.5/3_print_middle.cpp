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

// get size
int get_size(Node * head)
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

// get specific positon value
int position_value(Node *head, int pos)
{
    Node *tem = head;
     for(int i=1; i<pos; i++)
     {
        tem = tem->next;
     }
     return tem->val;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    // taking input
    while(true)
    {
        int x; cin >>x;
        if(x == -1)
        {
            break;
        }
        insert_linkedlist(head,tail,x);
    }

    // print_linkedlist(head);

    // pirnt middle element
    int size_of_ll = get_size(head);
    if( size_of_ll%2 ==0) // mid element are 2
    {
        cout <<position_value(head,size_of_ll/2) << " ";
        cout <<position_value(head,(size_of_ll/2)+1);
    }
    else // one mid element
    {
        cout <<position_value(head,(size_of_ll+1)/2);

    }
    // cout << get_size(head);


    /*
    take input
    print
    get size
    even odd
    */
    return 0;
}