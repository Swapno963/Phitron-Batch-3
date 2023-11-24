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

Node *convert(int a[], int n, int l, int r)
{
    if(l > r)
        return NULL;
    int mid = (l+r)/2;
    Node *root = new Node(a[mid]);
    Node *leftRoot = convert(a,n,l,mid-1);
    Node *rightRoot = convert(a,n,mid+1,r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
int main()
{
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    Node *root = convert(a,n,0,n-1);
    level_order(root);
    return 0;
}