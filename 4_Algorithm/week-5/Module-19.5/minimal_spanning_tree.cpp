#include<bits/stdc++.h>
using namespace std;

class Edge
{
    public:
        int a, b,w;
        Edge(int a, int b, int w)
        {
            this->a = a;
            this->b = b;
            this->w = w;
        }
};

const int N = 1e5+5;
int parent[N];
int ParentSize[N];
void dsu_set(int n)
{
    for(int i=1; i<=n; i++)
    {
        parent[i] = -1;
        ParentSize[i] = 1;
    }
}

// custom compare class
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

// find the leader
int dsu_find(int node)
{
    while(parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}


//  two component are becoming frined
void dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    if(leaderA != leaderB)
    {
        if(ParentSize[leaderA] > ParentSize[leaderB])
        {
            parent[leaderB] = leaderA;
            ParentSize[leaderA] += ParentSize[leaderB];        
        }
        else
        {
            parent[leaderA] = leaderB;
            ParentSize[leaderB] += ParentSize[leaderA];
        }
    }
}
int main()
{
    int n,e;
    cin >> n >> e;
    vector<Edge> v;
    vector<Edge> ans;

    dsu_set(n);
    while(e--)
    {
        int a,b,w;
        cin >> a >> b >> w;
        v.push_back(Edge(a,b,w));
    }

    sort(v.begin(),v.end(),cmp);
    for(Edge val : v)
    {
        int a = val.a;
        int b = val.b;
        int w = val.w;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if(leaderA == leaderB) continue;
        ans.push_back(val);
        dsu_union(a,b);
    }

    long long sum = 0; 
    for(Edge val : ans)
    {
        sum += (long long)(val.w);
    }
    cout << sum << endl;
    return 0;
}