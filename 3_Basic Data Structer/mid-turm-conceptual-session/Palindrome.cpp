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

// inserting element
void inserting_element(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head ==NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

// reverse linked list
void reverse_elemtn(Node *&head, Node *cur)
{
    if(cur->next ==NULL)
    {
        head = cur; return;  
    }
    reverse_elemtn(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;

}

// checking palindrom or not
void isPalindrome(Node *head)
{
    // taking input for first node
    if(head->next == NULL) {
        cout << "YES";
        return;
    }

    Node *newHead = NULL;
    Node *newTil = NULL;
    Node *tem = head;
    while(tem != NULL)
    {
        inserting_element(newHead,newTil, tem->val);
        tem = tem->next;
    }

    // reversing new head 
    reverse_elemtn(newHead,newHead);

    // checking
    Node *tem1 = head;
    Node *tem2 = newHead;
    bool flag = true;
    while (tem1 != NULL)
    {
        if(tem1->val != tem2->val)
        {
            flag = false; 
            break;
        }
        tem1 = tem1->next;
        tem2 = tem2->next;
    }
    if(flag) cout <<"YES\n";
    else cout <<"NO\n";
    
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while(true)
    {
        int x; cin >> x;
        if(x == -1) break;
        inserting_element(head,tail,x);
    }
    
    isPalindrome(head);
    return 0;
}