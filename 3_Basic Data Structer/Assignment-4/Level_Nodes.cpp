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


// print specific level
void level_nodes(Node * root, int lvl)
{
    queue<pair<Node *,int>> q;
    q.push({root, 0});

    // vector to string specifit level value
    vector<int> lvl_values;

    while(!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node * nd = pr.first;
        int level = pr.second;
        if(level == lvl) lvl_values.push_back(nd->val);
        q.pop();

        if(nd->left) q.push({nd->left, level+1});
        if(nd->right) q.push({nd->right, level+1});
    }
     for(auto & element : lvl_values)
   {
    cout << element << " ";
   }

   if(lvl_values.empty()) cout <<"Invalid";
}

int main()
{
    Node *root = intput_tree();
    int print_level; cin >> print_level;
    //cout << print_level;

    level_nodes(root,print_level);    
    return 0;
}