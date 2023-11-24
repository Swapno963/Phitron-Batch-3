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
    
    // if our root is null
    if(root == NULL)
    {
        cout << "There is no tree" << endl;
        return;
    }
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

Node *intput_tree()
{
    // we need to initlize root manuaally
    int val;
    cin >> val;
    Node *root;

    if(val == -1) // if there is no value then we set root to null
        root = NULL;
    else
        root = new Node(val);
    
    queue<Node*> q;
    if(root)
        q.push(root);

    while(!q.empty())
    {
        // 1. store front to another node then pop it
        Node *p = q.front();
        q.pop();


        // do our operation
        int l,r;
        cin >> l >> r;
        Node *myleft;
        Node *myright;

        // for left
        if(l == -1)
            myleft = NULL;
        else
            myleft = new Node(l); 

        // for right
        if(r == -1)
            myright = NULL;
        else
            myright = new Node(r); 

        // make the connection
        p->left = myleft;
        p->right = myright;

        // push children to queue
        if(p->left)
            q.push(p->left);        
            
        if(p->right)
            q.push(p->right);
    }
    return root;

}

// search element
bool search(Node *root, int x)
{
    if(root == NULL)
        return false;
    if(root->val == x)
        return true;
    if(x < root->val)
    {
        return search(root->left, x);
    }
    else 
    {
        return search(root->right, x);
    }

}

void insert(Node *&root, int x)
{
    if(root == NULL) root = new Node(x);
    else
    {
        if(x < root->val)
        {
            if(root->left == NULL)
            {
                root->left = new Node(x);
            }
            else 
            {
                insert(root->left, x);
            }
        }
        else 
        {
            if(root->right == NULL)
            {
                root->right = new Node(x);
            }
            else 
            {
                insert(root->right, x);
            }
        }
    }

}

int main()
{
    // take input
    Node *root = intput_tree();

    // output the tree
    level_order(root);
    cout << "Now insert" <<endl;
    insert(root, 13);
    insert(root, 32);
    level_order(root);
    return 0;
}