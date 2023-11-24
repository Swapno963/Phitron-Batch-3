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

// checking element
string is_equal(Node *head, Node *head2)
{
    Node *tem = head;
    Node *tem2 = head2;
    while(tem != NULL)
    {
        if(tem->val != tem2->val)
            {
                //cout <<tem->val << tem2->val;
                return "NO";
                break;
            } 
            tem = tem->next;
            tem2 = tem2->next;
    }
    return "YES";
    
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    // taking input for two linked list
    for(int i=1; i<3; i++)
    {
    while(true)
    {
        int x;
        cin >>x;
        if(x == -1)
        {
            break;
        }
        if(i == 1)
        {
            insert_element(head,tail,x);
        }
        else
        {
            insert_element(head2,tail2,x);

        }
    }
}
    // cout <<get_size(head) << endl;
    // cout <<get_size(head2) << endl;
    if(get_size(head) != get_size(head2))
    {
        cout <<"NO";
    }
    else{
        cout <<is_equal(head, head2);
    }
    
   // print_element(head);
   // print_element(head2);
    
    return 0;
}