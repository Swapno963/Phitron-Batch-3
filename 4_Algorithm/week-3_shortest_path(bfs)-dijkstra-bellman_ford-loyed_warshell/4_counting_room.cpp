#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
int n,m;
const int N = 1e3+5;
vector<string> adj;
int visited[N][N];
vector<pii> direc = {{0,-1},{0,1},{-1,0},{1,0}};
bool isValid(int i, int j)
{
    return (i>=0 && i<n && j >=0 && j<m);
}
void dfs(int i, int j)
{
    if(!isValid(i,j))
        return;
    if(visited[i][j]) 
        return;
    if(adj[i][j] == '#')
        return;

    visited[i][j] = true;
    for(auto d:direc)
        dfs(i+d.first, j+d.second);
    // dfs(i,j-1); // left
    // dfs(i,j+1); // right
    // dfs(i-1,j); // up
    // dfs(i+1,j); // down
}


int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        string x;
        cin >> x;
        adj.push_back(x);
    }

    int ct = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(adj[i][j] == '#') continue;
            if(visited[i][j]) continue;
            dfs(i,j);
            ct++; 
        }
    }

    cout << ct << endl;
    return 0;
}