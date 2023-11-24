#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<pair<long long int, long long int>> v[N];
long long int dist[N];
bool vis[N];
void dijkstra(long long int s)
{
    priority_queue<pair<long long int,long long int >, vector<pair<int,int>>, greater<pair<int, int>>> pq;
    pq.push({0,s});
    dist[s] = 0;
    while(!pq.empty())
    {
        pair<long long int, long long int> parent = pq.top();
        pq.pop();
        long long int parentNode = parent.second;
        if(vis[parentNode]) continue;
        vis[parentNode] = true;
        long long int parentCost = parent.first;
        for(int i=0; i<v[parentNode].size(); i++)
        {
            pair<long long int, long long int> child = v[parentNode][i];
            long long int childNode = child.first;
            long long int childCost = child.second;
            if(parentCost + childCost < dist[childNode])
            {
                dist[childNode] = parentCost + childCost;
                pq.push({dist[childNode], childNode});
            }
        }
        
    }
}
int main()
{
    long long int n, e;
    cin >> n >> e;
    while(e--)
    {
        long long int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b,w});
        v[b].push_back({a,w});
    }

    for(int i=1; i<=n; i++)
    {
        dist[i] = INT_MAX;
    }

    long long int s; cin >> s;
    dijkstra(s);

    long long int t; cin >> t;
    for(int i=1; i<=n; i++)
    {
        long long int node, cost; cin >> node >> cost;
        if(dist[node] <= cost) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}