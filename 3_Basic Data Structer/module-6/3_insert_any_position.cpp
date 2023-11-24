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

void insert_at_tail (Node *&head, int v)
{
    Node * newNoad = new Node(v);
    if(head == NULL)
    {
        head = newNoad;
        cout <<endl<<"Inserted at tail..!" <<endl<<endl;

        return;
    }
    Node *tem = head;
    while(tem->next != NULL)
    {
        tem = tem->next;
    }
    // tmp akn last node a
    tem->next = newNoad;
    cout <<endl<<"Inserted at tail..!" <<endl<<endl;
}

void print_linked_list(Node * head)
{
    cout <<endl;
    cout << "Your linked List is : "<< endl;
    Node *tem = head;
    while(tem != NULL)
    {
        cout << tem->val << endl;
        tem = tem->next;
    }
    cout << endl << endl;

}

void insert_at_positon(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tem = head;
    for(int i=0; i<pos-1; i++)
    {
        
        tem = tem->next;
    }
    newNode->next = tem->next;
    tem->next=newNode;
}
int main()
{
    Node *head = NULL;
   while(true)
   {
    cout << "Option 1: Insert at Tail " << endl;
    cout << "Option 2: Print Linked List " << endl;
    cout << "Option 3: Insert at any position " << endl;
    cout << "Option 4: Terminate  " << endl;
    int op;
    cin >> op;
    if(op == 1)
    {
        cout << "Please enter a valur : " ;
        int v;
        cin >> v;
        insert_at_tail(head,v);
       
    }
    else if(op == 2)
    {
        print_linked_list(head);
    }
    else if(op ==3)
    {
        int pos,v;
        cout <<"Enter Position : ";
        cin >> pos;
        cout << "Enter Value : ";
        cin >> v;
        insert_at_positon(head,pos,v);
    }
    else{
        break;
    }
   }
    return 0;
}