#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
};
int main()
{
    Node a,b;
    a.val = 3;
    b.val = 332;

    a.next = &b;
    b.next = NULL;

    cout <<a.next->val<<endl;
    return 0;
}