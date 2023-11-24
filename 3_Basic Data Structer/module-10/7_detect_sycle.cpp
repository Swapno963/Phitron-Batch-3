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

// detect sycle
void detect_sycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    bool flag = false;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            flag = true;
            break;
        }
    }

    if(flag == true) cout << "Sycle Detected!";
    else cout <<"There is no sycle!";
}
int main()
{
    // creating ndoe
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    // conecting node
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = b;

    // checking is there any sycle
    detect_sycle(head);
    return 0;
}