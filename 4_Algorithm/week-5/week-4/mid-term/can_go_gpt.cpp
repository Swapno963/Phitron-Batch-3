#include<bits/stdc++.h>
using namespace std;
const int N = 1005; // Maximum number of nodes
const int INF = 1e9; // Infinity constant

vector<pair<int, int>> adj[N]; // Adjacency list
bool visited[N]; // Visited nodes
int dist[N]; // Shortest distances

void dijkstra(int src) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[src] = 0;
    pq.push({0, src});
    
    while (!pq.empty()) {
        pair<int, int> f = pq.top();
        pq.pop();
        
        int p_node = f.second;
        int p_cost = f.first;
        
        if (visited[p_node]) continue;
        visited[p_node] = true;
        
        for (pair<int, int> vpair : adj[p_node]) {
            int v = vpair.first;
            int w = vpair.second;
            
            if (dist[p_node] + w < dist[v]) {
                dist[v] = dist[p_node] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    
    for (int i = 0; i < e; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }
    
    int s;
    cin >> s;
    
    for (int i = 1; i <= n; ++i) {
        dist[i] = INF;
        visited[i] = false;
    }
    
    dijkstra(s);
    
    int q;
    cin >> q;
    
    while (q--) {
        int d, dw;
        cin >> d >> dw;
        
        if (dist[d] <= dw) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}