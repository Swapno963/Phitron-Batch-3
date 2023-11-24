#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<pair<int, int>> v[N];
long long int dist[N];
bool vis[N];
void dijkstra(int s)
{
    priority_queue<pair<long long int,int >, vector<pair<long long int,int>>, greater<pair<long long int, int>>> pq;
    pq.push({0,s});
    dist[s] = 0;
    while(!pq.empty())
    {
        pair<long long int, int> parent = pq.top();
        pq.pop();
        int parentNode = parent.second;

        if(vis[parentNode]) continue;
        vis[parentNode] = true;
        long long int parentCost = parent.first;
        for(int i=0; i<v[parentNode].size(); i++)
        {
            pair<int, int> child = v[parentNode][i];
            int childNode = child.first;
            int childCost = child.second;
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
    int n, e;
    cin >> n >> e;
    while(e--)
    {
        int a, b;
        long long int w;
        cin >> a >> b >> w;
        v[a].push_back({b,w});
        v[b].push_back({a,w});
    }

    for(int i=1; i<=n; i++)
    {
        dist[i] = INT_MAX;
    }

    int s; cin >> s;
    dijkstra(s);

    int t; cin >> t;
    while(t--)
    {
        long long int node, cost; cin >> node >> cost;
        if(dist[node] <= cost) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}