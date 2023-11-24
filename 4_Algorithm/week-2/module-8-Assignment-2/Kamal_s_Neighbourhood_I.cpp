#include<bits/stdc++.h>
using namespace std;

// storage
const int N = 1e3+5;
vector<int> adj [N];

int main()

{
    int n, m;  cin >>n >>m;
    for(int i=0; i<m; i++)
    {
        int u,v; cin >> u >>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    //bfs(0);
    int kamalHouse; cin >> kamalHouse;
    int neighbour = 0;
        for(auto a:adj[kamalHouse]) neighbour++;
        cout << neighbour;
    



  



    return 0;
}