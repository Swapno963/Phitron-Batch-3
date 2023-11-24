#include<bits/stdc++.h>
using namespace std;

// storage
const int N = 1e5+5;
vector<int> adj [N];



// breath first search
void bfs(int s, int e)
{
    bool visited[N] = {false};
    int level[N] = {0};
    level[s] = 0;
    queue<int> q;
    q.push(s);
    visited[s] = true;

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
    }
    if(visited[e])
    {
        cout << level[e] <<endl;
    }
    else cout <<-1 <<endl;
    
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


  


    int test_case; cin >> test_case;
    
    while(test_case--)
    {
        int start, end; cin >> start >> end;
         bfs(start,end) ; 

        }
    
    

    return 0;
}