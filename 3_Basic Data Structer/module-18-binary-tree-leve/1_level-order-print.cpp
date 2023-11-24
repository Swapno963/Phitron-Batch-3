#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *left;
        Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// print in one level after another
void level_order(Node *root)
{
    // creating new node and manually pushing root to it
    queue<Node*>  q;
    q.push(root);

    while(!q.empty()) // do someting untill it is empty
    {
        // store front to another node then pop it
        Node *f = q.front();
        q.pop();

        // do every kind of operation to our value
        cout << f->val <<  " ";

        // now push the childeren 
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
        
    }

}
int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    // connection
    root->left = a;
    root->right = b;

    a->left = c;
    a->right = h;

    c->right = e;
    b->right = d;

    d->left = f;
    d->right = g;
    h->right = i;


    // printing in level order
    level_order(root);
    return 0;
}