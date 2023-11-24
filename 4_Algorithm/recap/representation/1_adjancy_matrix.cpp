#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e; // node and edge
    cin >> n >> e;
    int adj[n+1][n+1]; // matrix size shoud be node value + 1


    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            adj[i][j] = 0; // going to every sell and make value to 0;
            if(i == j) adj[i][j] = 1;
        }
    }


    while(e--) //taking edge as input
    {
        int a,b; 
        cin >> a >> b;
        adj[a][b] = 1;
        adj[b][a] = 1;
     }


     for(int i=0; i<=n; i++) // pringint our result
    {
        for(int j=0; j<=n; j++)
        {
            cout << adj[i][j] << " ";
            
        }
        cout << endl;
    }
    return 0;
}