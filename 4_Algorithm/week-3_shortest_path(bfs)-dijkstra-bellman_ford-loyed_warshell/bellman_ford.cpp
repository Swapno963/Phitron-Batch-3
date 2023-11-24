#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
const int N = 1e5+5;
const int INF = 1e9;
vector<pii> adj[N];
int d[N];
int n,m;


void bellman_ford(int s)
{
    for(int i=1; i<=n; i++)
        d[i] = INF;
    d[s] = 0;

    for(int  i=1; i<n; i++)
    {
        for(int u=1; u<=n; u++)
        {
            for(pii vpair : adj[u])
            {
                int v = vpair.first;
                int w = vpair.second;
                if(d[u] != INF && d[v] > d[u] + w)
                    d[v] = d[u] + w; 
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    while(m--)
    {
        int u,v,w;
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
    }

    bellman_ford(1);

    for(int i=1; i<=n; i++)
    {
        cout << "Distance of " << i << " " << d[i]<< endl;
    }
    return 0;
}