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

int mn = INT_MAX;
int mx = INT_MIN;

void find_leaf_min_max(Node *root)
{
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) 
    {
        // finding mx value
        if(root->val >mx)
        {
            mx = root->val;
        }

        // finding min value
         if(root->val <mn)
        {
            mn = root->val;
        }
    } 
    else
    {
        find_leaf_min_max(root->right);
        find_leaf_min_max(root->left);
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

int main()
{
    Node *root = intput_tree();
    find_leaf_min_max(root);
    cout << mx << " " << mn <<endl;
    mx = INT_MIN;
    mn = INT_MAX;

    return 0;
}