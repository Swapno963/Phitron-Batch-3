#include<bits/stdc++.h>
using namespace std;


const int N = 1e3+5;
vector<int> adj[N];
bool visited[N];
int level[N];
int cmt = 0;
vector<int> res;
// depth first search
void dfs(int u)
{
    cmt++;
    visited[u] = true;
    for(int v:adj[u])
    {
        if(visited[v]) continue;
        dfs(v);
    }
}
int main()
{
    int n,m; cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int cc = 0;
    for(int i=1; i<N; i++)
    {
        if(visited[i]) continue;
      
        dfs(i);
        if(cmt != 1) {
            res.push_back(cmt);
        } 
        cmt = 0;
    }

    sort(res.begin(), res.end());
    for(auto a:res)
        cout << a << " ";


    return 0;
}