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

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
    }
    Node *tmp = head; 

    while(tmp->next != NULL)
    {

        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void print_linked_list(Node *head)
{
    Node *tem = head;
    while(tem !=NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
}
int main()
{
    Node *head = NULL;

    while(true)
    {
    cout << "Option 1 : Insert : \n";
    cout << "Option 2 : print : \n";
    cout << "Option 3 : Stop : \n";
    
    int op; cin >>op;
    if(op == 1)
    {
        int x;
        cin >> x;
        insert_at_tail(head, x);
    }
    else if(op == 2)
    {
        print_linked_list(head);
    }
    else
    {
        break;
    }
    }
    return 0;
}