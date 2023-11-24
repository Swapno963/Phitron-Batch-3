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

// taking tree input
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


// print reverse way
void print_tree_reverse(Node *root)
{
    vector<int> v;
    queue<Node *> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node * nd = q.front();
        q.pop();
        v.push_back(nd->val);

        if(nd->right) q.push(nd->right);
        if(nd->left) q.push(nd->left);
    } 
    reverse(v.begin(), v.end());
   for(auto & element : v)
   {
    cout << element << " ";
   }
}
int main()
{
    Node *root = intput_tree();
    print_tree_reverse(root);
    return 0;
}