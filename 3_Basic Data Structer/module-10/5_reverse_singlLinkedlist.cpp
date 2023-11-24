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

// print linked list
void print_linkedList(Node *head)
{
    Node *tem = head;
    while(tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
}

// reverse single linked list
void reverse_linkedList(Node *&head, Node *cur)
{
    // base case
    if(cur->next == NULL)
    {
        head = cur;
        return;
    }

    // body part
    reverse_linkedList(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
int main()
{
    //  create 3 linked list
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    // link them
    head->next = a;
    a->next = b;

    // print linked list
    print_linkedList(head);
    cout << endl;

    // reverse lineked list
     (head, head);
    // print after linked list
    print_linkedList(head);



    
    return 0;
}