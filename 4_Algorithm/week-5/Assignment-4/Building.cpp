#include<bits/stdc++.h>
#define pi pair<int, long long>
using namespace std;

const int N = 1e5+5;
vector<pi> v[N];
bool vis[N];

class Edge
{
    public:
    long long a,b,w;
    Edge(int a, int b, long long w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

class cmp
{
    public:
    bool operator()(Edge a, Edge b)
    {
        return a.w > b.w;
    }
};

void prims(int s, int n)
{
    priority_queue<Edge,vector<Edge>,cmp> pq;
    vector<Edge> edgeList;
    pq.push(Edge(s,s,0));
    int cnt = 0;
    while(!pq.empty())
    {
        Edge parent = pq.top();
        pq.pop();
        int a = parent.a;
        int b = parent.b;
        long long w = parent.w;
        if(vis[b]) continue;
        vis[b] = true;
        cnt++;
        edgeList.push_back(parent);
        for(int i=0; i<v[b].size(); i++)
        {
            pi child = v[b][i];
            if(!vis[child.first])
            {
                pq.push(Edge(b,child.first, child.second));
            }
        }
    }

    // want to delete the first one
    edgeList.erase(edgeList.begin());
    long long sum = 0;
    for(Edge val : edgeList)
    {
        // cout << val.a << " " << val.b << " " << val.w << endl;
        sum += (long long)(val.w); 
    }
    if(cnt == n )
        cout << sum << endl;
    else cout << -1<< endl;
    
}
int main()
{
    int n,e;
    cin >> n >> e;
    while(e--)
    {
        long long a,b,w;
        cin >> a >> b >> w;
        v[a].push_back({b,w});
        v[b].push_back({a,w});
    }

    prims(1, n);
    return 0;
}