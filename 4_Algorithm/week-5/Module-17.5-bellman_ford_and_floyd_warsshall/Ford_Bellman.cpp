#include<bits/stdc++.h>
using namespace std;

const int INF = 1e7;

int main()
{
    int n, e; // node edge
    cin >> n >> e;
    int dis[n+1][n+1];

    // make all distance inf and after that give 0 to i==j
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            dis[i][j] =  INF;
            if(i==j) dis[i][j] = 0;
        }
    }

    // Now, int dis martix we need to take input of directed waighted graph

    while(e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        dis[a][b] = w;
    }


    // checking our work 
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


   // applying algorithm
   for(int k=1; k<=n; k++)
   {
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(dis[i][k] + dis[k][j] < dis[i][j])
            {
                dis[i][j] = dis[i][k] + dis[k][j];
            }
        }
    }
   }


   // printing result
//    for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=n; j++)
//         {
//             if(dis[i][j] == INF) cout << "x" << " ";
//             else cout << dis[i][j] << " ";
//         }
//         cout << endl;
//     }

        for(int j=1; j<=n; j++)
        {
            if(dis[1][j] == INF) cout << 30000 << " ";
            else cout << dis[1][j] << " ";
        }
    return 0;
}