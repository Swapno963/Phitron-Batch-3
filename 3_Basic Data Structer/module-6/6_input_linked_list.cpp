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

// print linked list
void print_linked_list(Node * head)
{
    cout <<endl;
    cout << "Your linked List is : "<< endl;
    Node *tem = head;
    while(tem != NULL)
    {
        cout << tem->val << endl;
        tem = tem->next;
    }
    cout << endl << endl;

}
int main()
{
    
    return 0;
}