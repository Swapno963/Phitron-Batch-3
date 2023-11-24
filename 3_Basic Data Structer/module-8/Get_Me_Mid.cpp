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

// insert element
void insert_element(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else{

    tail->next = newNode;
    tail = newNode;
    }
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

// size of element
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

// sort linked list
void sort_in_decend(Node *&head)
{
    for(Node *i = head; i->next !=NULL; i = i->next)
    {
        for(Node *j = i->next; j != NULL; j = j->next)
        {
            if(i->val < j->val)
            {
                swap(i->val,j->val);
            }
            // cout <<i->val <<" " <<j->val <<endl;
        }

    }
}

// get position value
int  get_positon_val(Node *head, int pos)
{
    Node *tem = head;
    for(int i=0; i<pos-1; i++)
    {
        tem = tem->next;
    }
    return tem->val;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while(true)
    {
        int x;
        cin >> x;
        if(x == -1) break;

        insert_element(head,tail,x);
    }

    sort_in_decend(head);


    if(get_size(head) %2 == 0)
    {
        cout <<get_positon_val(head, get_size(head)/2) <<" " <<get_positon_val(head, (get_size(head)/2)+1) ;
    }
    else{
        cout <<get_positon_val(head, (get_size(head)+1)/2) ;
    }
    //print_element(head);
    return 0;
}