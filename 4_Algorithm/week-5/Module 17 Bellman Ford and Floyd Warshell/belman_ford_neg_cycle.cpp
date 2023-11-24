#include<bits/stdc++.h>
using namespace std;

class Edge{
    public:
        int u; 
        int v; 
        int w;

        Edge(int u, int v, int w)
        {
            this->u = u;
            this->v = v;
            this->w = w;
        }
};

int main()
{
    int n, e; // hear n is node num and e is how many edge we have
    cin >> n >> e;
    vector<Edge> v; // this vector holds Edge type of data, Edge have store 3 int
    while(e--)
    {
        int a, b, w; 
        cin >> a >> b >> w;
        Edge ed(a,b,w);
        v.push_back(ed);
    }


    int dis[n+1]; 
    for(int i=1; i<=n; i++)
    {
        dis[i] = INT_MAX; // making initial distance max;
    }

    dis[1] = 0; // makeing source distance 0;
    
    for(int i=1; i<=n; i++) // loop will continue for n-1 times
    {
        for(int j=0; j<v.size(); j++)
        {
            Edge ed = v[j];
            int a = ed.u;
            int b = ed.v;
            int w = ed.w;

            // relaxatioin processs
            if(dis[a] + w < dis[b])
            {
                dis[b] = dis[a] + w;
            }
        }
    }



    // detacting cycle
    bool cycle_exist = false;
        for(int j=0; j<v.size(); j++)
        {
            Edge ed = v[j];
            int a = ed.u;
            int b = ed.v;
            int w = ed.w;

            // relaxatioin processs
            if(dis[a] + w < dis[b])
            {
                cycle_exist = true;
                break;
            }
        }

        if(cycle_exist)
        {
            cout << "Cycle Exist" << endl;
        }
        else 
        {
            // printing our result distance for all node
            for(int i=1; i<=n; i++)
            {
                cout << "Node " << i << " : " << dis[i] <<endl;
            }
        }

    return 0;
}