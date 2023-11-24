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
    // function thake node create korla function sesh hober por node chola jabe, ai jonno dynamic obj neia kaj kora hy, ar akta reson holo obj delet kora jai
    Node *head = new Node(10);
    Node *a = new Node(20);
    

    head->next = a; // hear is pointer means address of obj of a


    // let's see the values
    cout <<head->val <<endl;
    cout <<a->val << endl;

    // do in diffrent way
    cout << head->next->val << endl;

    // more traditional way
    // hear head is pointer, so we de_ref it, to go to the next obj we need to de_ref next because it stores pointer
    cout << (*(*head).next).val << endl;
    
    return 0;
}