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

// count node member
int count_member(Node *root)
{
    if(root == NULL) return 0;
    int l = count_member(root->left);
    int r = count_member(root->right);

    return l+r+1;
}


// get maxium height
int get_max_height(Node *root)
{
    if(root == NULL) return 0;
    int l = get_max_height(root->left);
    int r = get_max_height(root->right);
    return max(l,r)+1;
}

int main()
{
    // take input
    Node *root = intput_tree();
    // count nodes number
    int node_memebers = count_member(root);
    //cout << node_memebers << " ";
    // count tree height
    int max_height =  get_max_height(root);
    //cout << max_height;

    if(node_memebers == (pow(2,max_height)-1)) cout << "YES";
    else cout << "NO";

    return 0;
}