#include<bits/stdc++.h>
using namespace std;
// make node and add prev in two place
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

// create queue
class myQueue
{
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int sz = 0;
    // now we need to pus in two condition 1. there is nothing 2. there one or multple node
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }

    /*
    1.decrise size
    2.there is only one element
    3.there is multple element
    */
   void pop()
   {
    sz--;
    Node *deleteNode = head;
    head = head->next;
    if(head == NULL)
    {
        tail = NULL;
        delete deleteNode;
        return;
    }

    head->prev = NULL;
   }

       //geting last inserted value : just return head value
    int front()
    {
        return head->val;
    }

    // return size : that sz, which we incrise in push and decrise in pop
    int size()
    {
        return sz;
    }

    // is our linked list empty or not
    bool empty()
    {
        if(sz == 0) return true;
        else false;
    }
};
int main()
{
    myQueue q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.front() << endl;

    q.pop();
    cout << q.front() << endl;

    cout << q.size() << endl;
    return 0;
}