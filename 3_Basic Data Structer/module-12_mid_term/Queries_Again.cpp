#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node *prev;
        Node(int vl)
        {
            this->val = vl;
            this->next = NULL;
            this->prev = NULL;
        }
};

// insert at head d
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
  
        newNode->next = head; // give head to next of newNode
        head->prev = newNode;
        head = newNode;
    
}

// insert at positon d
void insert_at_position(Node *&head, int val, int pos_ind)
{
    Node *newNode = new Node(val);
    //   if(head == NULL)
    // {
    //     head = newNode;
    //     tail = newNode;
    //     return;
    // }
    Node *tem = head;
    for(int i=1; i<pos_ind; i++)
    {
        tem = tem->next;
    }


    newNode->next = tem->next;
    tem->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tem;

}
// insert at tail d
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
// pritning element
void print_element(Node *ht,char left_or_right)
{
    Node *tem = ht;
    if(left_or_right == 'L')
    {
        cout <<"L -> ";
         while (tem != NULL)
    {
        cout <<tem->val << " ";
        tem = tem->next;
    }

    }
    else
    {
        cout <<"R -> ";
         while (tem != NULL)
    {
        cout <<tem->val << " ";
        tem = tem->prev;
    }
    }
   
    cout <<endl;
}

// get size
int get_size(Node *head)
{
    Node *tem = head;
    int count  = 0;
    while(tem != NULL)
    {
        count++;
        tem = tem->next;
    }
    return count;
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int test_case; cin >> test_case;
    for(int i=0; i<test_case; i++)
    {
        int index, value; cin >> index >> value;
        bool flag = true;
         if(get_size(head) < index)
        {
            cout << "Invalid" <<endl;   
            flag = false;
        }
        else if(index == 0 )
        {
            insert_at_head(head,tail,value);
        }
        else if( get_size(head) == index)
        {
            //cout << "came" << index << endl;
            insert_at_tail(head,tail,value);

        }
        else{
            insert_at_position(head,value,index);
        }

        // prit or not
        if(flag){

            print_element(head,'L');
            print_element(tail,'R');
        }
    }
    return 0;
}