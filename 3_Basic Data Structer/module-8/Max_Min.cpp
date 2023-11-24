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

int get_max(Node *head, string action)
{
    Node *tem = head;
    int res = tem->val;
    if(head->next == NULL) 
    {
        return tem->val;
    }
    // cout << head->next->val;

    while(tem != NULL)
    {
        if(action == "max" && res < tem->val)
        {
            res = tem->val;
        }
        else if(action == "min" && res > tem->val)
        {
            res = tem->val;
        }
        tem = tem->next;
    }
    // if(action == "min")
    // {
    //     cout <<"min"<<endl;
    // }
    return res;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while(true)
    {
        int x;
        cin >>x;
        if(x == -1)
        {
            break;
        }
        insert_element(head,tail,x);
    }
    
    //print_element(head);
     cout << get_max(head,"max")<<" " <<get_max(head,"min");
    return 0;
}