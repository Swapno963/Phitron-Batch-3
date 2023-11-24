#include<bits/stdc++.h>
using namespace std;
const long long INF = 1e15+5;
int main()
{
    int n, e;
    cin >> n >> e;
    long long dis[n+1][n+1];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            dis[i][j] = INF;
            if(i==j) dis[i][j] = 0;
        }
    }

    // taking directed graph input in matrix
    while(e--)
    {
        long long a,b,w;
        cin >> a >> b >> w;
        if(dis[a][b] > w)
            dis[a][b]  = w;

        //if(dis[a][b] == INF)

    }

// checking
//   for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=n; j++)
//         {
//             if(dis[i][j] == INF) cout << "x" << " ";
//             else cout << dis[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;

    // floyed warshall algorithm
    for(int k=1; k<=n; k++)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(dis[i][k] + dis[k][j] < dis[i][j])
                    dis[i][j] = dis[i][k] + dis[k][j];
            }
        }
    }


    // print for checking algorithm result
    /*
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(dis[i][j] == INF) cout << "x" << " ";
            else cout << dis[i][j] << " ";
        }
        cout << endl;
    }
    */

    int test_case; cin >> test_case;
    while(test_case--)
    {
        int x,y; cin >> x >> y;
        if(x > n || y > n || dis[x][y] == INF)
            cout << -1 << endl;
        else cout << dis[x][y] << endl; 
    }
    
    return 0;
}