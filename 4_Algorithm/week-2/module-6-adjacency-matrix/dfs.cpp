#include<bits/stdc++.h>
using namespace std;


const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];

void dfs(int u)
{ // 1 : action just after entering a node
    visited[u] = true;
    cout <<"visiting : " << u << endl;

    for(int v:adj[u])
    {
        // 2 : action before entering a new neighbout 
        if(visited[v]) continue;

        dfs(v);
        // 3 : action after exiting a neighbout
    }
    // 4 : action before exiting a node
}
int main()
{
    int n,m;
    cin >> n >> m;

    // taking input
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        //adj[v].push_back(u);
    }

    dfs(1);
    // printing
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
    return 0;
}