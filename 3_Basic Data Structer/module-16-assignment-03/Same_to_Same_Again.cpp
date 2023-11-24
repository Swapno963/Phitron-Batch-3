#include<bits/stdc++.h>
using namespace std;
// node for single linked list
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

// queue class
class myQueue 
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

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

    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }

    int front()
    {
        return head->val;
    }

    bool empty()
    {
        if(sz == 0) return true;
        else return false;
    }

    int size()
    {
        return sz;
    }
};

// stack class
class myStack
{
    public:
        list<int> l;
        void push(int val)
        {
            l.push_back(val);
        }
        void pop()
        {
            l.pop_back();
        }
        int top()
        {
            return l.back();
        }
        int size()
        {
            return l.size();
        }
        bool empty()
        {
            if(l.size() ==0 ) return true;
            else return false; 
        }
};

int main()
{
    // our queue and stack
    myStack st;
    myQueue q;

    // n element for stack and m element for queue
    int n,m;
    cin >> n >> m;

    // taking input for stack
    while(n--)
    {
        int x; cin >>x;
        st.push(x);
    }

    // taking input for queue
    while(m--)
    {
        int x; cin >> x;
        q.push(x);
    }
    /*
    // checking input

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout <<endl;

    // checking for queue
    while(!q.empty())
    {
        cout << q.front() <<" ";
        q.pop();
    }
    */


    // main part start
    bool flag = true;
    if(st.size() == q.size()) // checking are size same or not
    {
         while(!st.empty()) // since both size are same so we can take any of them
        {
            if(st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }
    else{
        flag = false;
    }
    
    flag ? cout <<"YES" : cout <<"NO";

    return 0;
}