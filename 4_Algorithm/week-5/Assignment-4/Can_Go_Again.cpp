#include<bits/stdc++.h>
using namespace std;
const long long INF = 1e18;
class Edge
{
    public:
        long long  u;
        long long  v;
        long long w;
        Edge(long long u,long long v, long long w)
        {
            this->u = u;
            this->v = v;
            this->w = w;
        }
};

int main()
{
    int n,e; 
    cin >> n >> e;
    vector<Edge> v;
    while(e--)
    {
        long long a, b,w;
        cin >> a >> b >> w;
        Edge ed(a,b,w);
        v.push_back(ed);
    }

    long long int dis[n+1];
    for(int i=1; i<=n; i++)
    {
        dis[i] = INF;
    }
    int source; cin >> source;
    //cout << source << endl;
    dis[source] = 0;

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<v.size(); j++)
        {
            Edge ed = v[j];
            // relaxation process
            if(dis[ed.u] != INF && dis[ed.u] + ed.w < dis[ed.v])
            {
                dis[ed.v] = dis[ed.u] + ed.w;
            }
        }
    }

    // detecting cycle
    bool cycle_exist = false;
    for(int j=0; j<v.size(); j++)
    {
        Edge ed = v[j];
        if(dis[ed.u] + ed.w < dis[ed.v])
        {   if(dis[ed.u] == INF && ed.w < 0) continue;
            cycle_exist = true;
            break;
        }
    }

    if(cycle_exist) cout << "Negative Cycle Detected" << endl;
    else {
        int test_case; cin >> test_case;
        while(test_case--)
        {
            int a; cin >> a;
            if(dis[a] == INF) 
            {
                cout << "Not Possible" << endl;
            }
            else{
                cout << dis[a] << endl;
            }
        }
    }

    // printing our result
    // for(int i=1; i<=n; i++)
    // {
    //     cout << "Node " << i << " : "<< dis[i] << endl;
    // }
    return 0;
}