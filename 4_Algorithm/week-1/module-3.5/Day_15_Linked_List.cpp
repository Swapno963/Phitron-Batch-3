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

// insert 
void insert(Node *&head, Node *&tail,int x)
{
    Node *tem = new Node(x);
    if(head == NULL)
    {
        head = tem;
        tail = tem;
        return;
    }
    tail->next = tem;
    tail = tail->next;
}


void print(Node *head)
{
    Node *tem = head;
    while(tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
}
int main()
{
    int test_case; cin >> test_case;

    Node *head = NULL;
    Node *tail = NULL;

    while(test_case--)
    {
        int x; cin >> x; 
        insert(head,tail,x);
    } 
    print(head);
    return 0;
    
}