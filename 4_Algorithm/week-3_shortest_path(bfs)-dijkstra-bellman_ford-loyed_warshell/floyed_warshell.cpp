#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;
const int INF = 1e9;
int n,m; 
int d[N][N];
void dist_init()
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(i != j)
                d[i][j] = INF;
        }
    }
}

void print_matrix()
{
     for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(d[i][j] == INF)
                cout << "x" << " ";
            else cout << d[i][j] <<  " ";
        }
        cout << endl;
    }
}
int main()
{
    cin >>n >> m;

    dist_init();


    for(int i=0; i<m; i++)
    {
        int u,v,w; cin >> u >> v >> w;
        d[u][v] = w;
    }


    // starts our
    for(int k=1; k<n; k++)
    {
        for(int i=1; i<n; i++)
        {
            for(int j=1; j<n; j++)
            {
                d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }

    print_matrix();
    return 0;
}