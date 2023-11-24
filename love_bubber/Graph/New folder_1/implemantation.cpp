#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
        unordered_map<int, list<int> > adj;

        // adding edge
        void addEdge(int u, int v, bool direction)
        {
            // direction 0 means undirected
            // direction 1 means directed

            // create an edge from u to v;
            adj[u].push_back(v);

            //direction
            if(direction == 0)
                adj[v].push_back(u);
        }

        // printing graph
        void printAdjList()
        {
            for(auto i:adj){
                cout << i.first << "->";
                for(auto j:i.second){
                    cout << j << ", ";
                }
                cout << endl;
            }
        }

};
int main()
{
    int n, m; cin >> n >> m;
    
    // create graph
    graph g;

    for(int i=0; i<m; i++)
    {
        int u, v; cin >> u >> v;
        g.addEdge(u,v,0); // undirected graph
    }

    // print graph
    g.printAdjList();
    
    return 0;
}