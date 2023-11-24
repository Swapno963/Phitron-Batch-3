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

class myQueue
{
    public:
        Node * head = NULL;
        Node * tail = NULL;
        int sz = 0;

    // incriseing size then creating new node and if there is no node then that new node is our head and tail 
    // if we have node then siply we add new node at tail and move tail to next element    
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
        tail = tail->next;
    }

    // decrise size and storing delete node then move our head to forward one step then delete that node.
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
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