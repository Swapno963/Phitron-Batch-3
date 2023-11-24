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

// print element using recursion
void get_recur_clement(Node *head, string action)
{
    Node *tem = head;
    // base case
    if(tem == NULL) return;
    
    if(action == "org")
    {
        cout << tem->val <<" ";
        get_recur_clement(tem->next,action);
    }
    else{
        get_recur_clement(tem->next,action);
        cout << tem->val <<" ";
    }
    
}


// print normal way
void get_recur_normal(Node *head)
{
    Node *tem = head;
    // base case
    if(tem == NULL) return;
    
   
        cout << tem->val <<" ";
        get_recur_normal(tem->next);
    
    
}

// print recursive way
void get_recur_rev(Node *head)
{
    Node *tem = head;
    // base case
    if(tem == NULL) return;
    
        get_recur_rev(tem->next);
        cout << tem->val <<" ";
    
    
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
    //print_element(head);

  get_recur_clement(head,"rev");
   cout <<endl;
    get_recur_clement(head,"org");
   
   
    // get_recur_rev(head);
    // cout << endl;
    // get_recur_normal(head);

    return 0;
}