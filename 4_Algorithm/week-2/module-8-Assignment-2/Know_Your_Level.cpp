#include<bits/stdc++.h>
using namespace std;

// storage
const int N = 1e5+5;
vector<int> adj [N];
bool visited[N];
int level[N];
int parent[N];

//  result vector
vector<int> res;

// breath first search
void bfs(int s,int lv)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    bool is_found = false;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
      
        for(auto v:adj[u])
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
          


        }
    if(level[u] == lv) 
        {
            //cout << u << " ";
            res.push_back(u);
            is_found = true;
      
        }
    }

            
    if(!is_found) cout << -1;
    
}
int main()

{
    int n, m;  cin >>n >>m;
    for(int i=0; i<m; i++)
    {
        int u,v; cin >> u >>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int lv; cin >> lv;
    bfs(0, lv);
    sort(res.begin(), res.end());
    for(int i:res) cout << i << " ";

    return 0;
}