#include<bits/stdc++.h>
using namespace std;

// declear some variable
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
int depth[N];
int height[N];

// dfs
void dfs(int u)
{
    // 1 : after entering a node
    visited[u] = true;
    //cout << "Visiting :" << u << endl;

    for(int v:adj[u])
    {
        //2 : action before entering a new neibour
        if(visited[v]) continue; // if we visited before then do not go further

        // calculate depth
        depth[v] = depth[u] + 1;

        // else go beyond
        dfs(v);

        // 3 : after exting a neighobour
        // assign height
        if(height[v]+1 > height[u])
            height[u] = height[v] + 1;

        //or
        //height[u] = max(height[u], height[v]+1)
    } 

    // 4 : action before exeting a node
}
int main()
{
    // taking input
    int n, m; cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    // printing the graph
    /*
    for(int i=1; i<=n; i++)
    {
        cout << "List " << i << ": ";
        for(auto j:adj[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
    */
    
    // callling DFS
    dfs(1);

    // printing depth
      for(int i=1; i<=n; i++)
    {
        cout << "Depth of our node " << i <<" :" << depth[i] << " And height is "<< height[i] << endl;
    }
    return 0;
}