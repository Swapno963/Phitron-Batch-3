#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        string val;
        Node *next;
        Node *prev;
        Node(string vl)
        {
            this->val = vl;
            this->next = NULL;
            this->prev = NULL;
        }
};
void insert_head_element(Node *&head,Node *&tail,string val)
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

// handel query
void handel_query(Node *head,Node *cur)
{
    int test_cases; cin >> test_cases;
    
    while(test_cases--)
    {

        // taking fulll query
        string qr,addr;
        cin >>qr;
        if(qr == "visit")
        {
            cin >> addr;
        }



        // starting logic
        if(qr == "visit")
        {   
            // cur start
            Node *cur_start = cur;
            //cout << "starting cur is" << " " << cur_start->val << endl;
            cur = head;
            bool flag = false;
            while(cur != NULL)
            {
                if(cur->val == addr)
                {
                    // flag = true;
                    cout << addr <<endl;
                    flag = true;   
                    break; 
                }
                cur = cur->next;
            }
             if(cur == NULL)
                {
                    cur = cur_start;   
                }
                if(!flag)
                    {
                    //   cur = head;
                        cout <<"Not Available" <<endl;
                    }     
        }

            else if(qr == "prev")
            {
                if(cur->prev == NULL)
                {
                    cout <<"Not Available" <<endl;        
                }
                else 
                {
                    cur = cur->prev;
                    cout << cur->val << endl;
                }
            }
            
            else if(qr == "next")
            {
                if(cur->next == NULL)
                {
                    cout <<"Not Available" <<endl;        
                }
                else 
                {
                    cur = cur->next;
                    cout << cur->val << endl;
                }
            }

    }
    
}

// print linked list
void print_linkedList(Node *head)
{
    Node *tem = head;
    while(tem != NULL)
    {
        cout << tem->val << endl;
        tem = tem->next;
    }
}
int main()
{
    string x;
    Node *head = NULL;
    Node *tail = NULL;
    
    // taking element input
    while(true)
    {
        cin >> x;
        if(x == "end") break;

        // insert linked list
        insert_head_element(head,tail,x);
    }
    
    // print lined list
    //print_linkedList(head);

    handel_query(head,head);
    return 0;
}