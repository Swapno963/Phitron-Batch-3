#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+5;
vector<pair< long long int,long long int>> v[N];
long long int dis[N];

void dijkstra(int s)
{
    queue< long long int> q;
    q.push(s);
    dis[s] = 0;
    while(!q.empty())
    {
        long long int parent = q.front();
        q.pop();
        for(int i=0; i< v[parent].size(); i++)
        {
            pair< long long int, long long int> child = v[parent][i];
            long long int childNode = child.first;
            long long int childCost = child.second;
            if(dis[parent] + childCost <dis[childNode])
            {
                dis[childNode] = dis[parent] + childCost;
                q.push(childNode);
            }
        }
    }

}
int main()
{
    long long int n, e; cin >> n >> e;
    while(e--)
    {
        long long int a, b , w; 
        cin >> a >> b >> w;
        v[a].push_back({b,w});
        //v[b].push_back({a,w});

    }

    // distance of all need to make max
    for(long long int i=1; i<=n; i++)
    {
        dis[i] = INT_MAX;
    }

    long long int source; cin >> source;
    dijkstra(source);

    long long int test_case; cin >> test_case;
    //cout << test_case;
    while(test_case--)
    {
        long long int node; long long int cost;
        cin >> node >> cost;
        if(dis[node] <= cost) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}