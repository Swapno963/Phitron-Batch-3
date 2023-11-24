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
        cout <<endl<<"Inserted at head..!" <<endl<<endl;

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
        if(tem ==NULL)
        {
            cout <<endl<<"Invalid index"<<endl <<endl;
            return;
        }
    }
    cout <<"This is tem value : " << tem->val << endl;
    newNode->next = tem->next;
    tem->next=newNode;
}

void insert_at_head(Node * &head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout <<endl <<"Inserted at Head !"<< endl << endl;
}

void delete_from_position(Node *head, int pos)
{
    Node *tem = head;
    for(int i=0; i<pos-1; i++)
    {
        tem = tem->next;
         if(tem ==NULL)
        {
            cout <<endl<<"Invalid index"<<endl <<endl;
            return;
        }
    }
    // if(tem->next == NULL)
    // {
    //     cout <<endl<<"Invalid index"<<endl <<endl;
    //     return;
    // }
    Node *deleteNode = tem->next;
    tem->next = tem->next->next;
    delete deleteNode; 
    cout << endl <<"Deleted position " <<pos << endl<< endl;
}

void delete_head(Node *&head)
{
    if(head == NULL)
    {
        cout <<endl<<"Invalid index"<<endl <<endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl <<"Deleted Head"  << endl<< endl;

}


int main()
{
    Node *head = NULL;
   while(true)
   {
    cout << "Option 1: Insert at Tail " << endl;
    cout << "Option 2: Print Linked List " << endl;
    cout << "Option 3: Insert at any position " << endl;
    cout << "Option 4: Insert at Head " << endl;
    cout << "Option 5: Delete at :  " << endl;
    cout << "Option 6: Delete Head :  " << endl;

    cout << "Option 7: Terminate  " << endl;
    int op;
    cin >> op;
    if(op == 1) // insert at tail
    {
        cout << "Please enter a valur : " ;
        int v;
        cin >> v;
        insert_at_tail(head,v);
       
    }
    else if(op == 2) // print linked list
    {
        print_linked_list(head);
    }
    else if(op ==3) // enter at any positon
    {
        int pos,v;
        cout <<"Enter Position : ";
        cin >> pos;
        cout << "Enter Value : ";
        cin >> v;
        if(pos == 0) // if we give 0 index it means we want to change the head,
        {
            insert_at_head(head,v);
        }
        else{
            insert_at_positon(head,pos,v);
        }
    }
    else if(op == 4) // insert head
    {
        int x;
        cout <<"Enter Head node value : ";
        cin >>x;
        insert_at_head(head,x);
    }
    else if(op == 5) // delete node
    {
        int pos;
        cout << "Enter your position : ";
        cin >>pos;
        if(pos == 1)
        {
            delete_head(head);
        }
        else
        {
            delete_from_position(head,pos);
        }
    }
    else if(op == 6) // delete head
    {
        delete_head(head);
    }
    else{
        break;
    }
   }
    return 0;
}