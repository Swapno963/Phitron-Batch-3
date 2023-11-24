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

int main()
{
    Node a(10);
    Node b(32);

    a.next = &b;

    cout <<a.next->val<<endl;

    return 0;
}