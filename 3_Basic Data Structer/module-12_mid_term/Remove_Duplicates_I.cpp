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


// taking inpu and storing
void insert_element(Node *&head, Node*&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

// sorting the linkedlist
void sort_linkedList(Node *&head)
{
    for(Node *k = head; k->next !=NULL; k = k->next)
    {
        for(Node *l = k->next; l != NULL; l = l->next)
        {
            if(k->val > l->val)
            {
                swap(k->val,l->val);
            }
        }

    }
}

// remove duplicate
void remove_duplicate(Node *&head)
{
    Node *tem = head;
    if(head == NULL) return;
    while(tem->next != NULL)
    {
        if(tem->val == tem->next->val)
        {
            tem->next = tem->next->next;
        }
        if(tem->next == NULL)
        {
            return;
        }
        else if(tem->val != tem->next->val){
            tem = tem->next;
        }
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while(true)
    {
        int x; cin >> x;
        if(x == -1) break;
        insert_element(head,tail,x);
    }
    // sort unsorted linkes list
    sort_linkedList(head);
    // remove duplicate
    remove_duplicate(head);
    // print single emement
    print_element(head);
    return 0;
}