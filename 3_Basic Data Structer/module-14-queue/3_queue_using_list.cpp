#include<bits/stdc++.h>
using namespace std;

// create queue
class myQueue
{
    public:
        list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }

   void pop()
   {
    l.pop_front();
   }

       //geting last inserted value : just return head value
    int front()
    {
        return l.front();
    }

    // return size : that sz, which we incrise in push and decrise in pop
    int size()
    {
        return l.size();
    }

    // is our linked list empty or not
    bool empty()
    {
        return l.empty();
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