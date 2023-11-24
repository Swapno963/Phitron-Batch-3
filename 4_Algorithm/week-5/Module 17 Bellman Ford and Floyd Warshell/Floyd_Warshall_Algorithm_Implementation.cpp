#include<bits/stdc++.h>
using namespace std;
const int INF = 1e7;
int main()
{
    int n, e;
    cin >> n >> e;
    int dis[n+1][n+1];

// making all distance inf after checking what if i and are equal or not, if so we make distance of i and j to 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            dis[i][j] = INF;
            if(i==j) dis[i][j] = 0;
        }
    }

    // taking directed waighted graphn input in matrix
    while(e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        dis[a][b] = w;
    }


    //printing for checking what if correct or not
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
          if(dis[i][j] == INF) cout << "x" << " ";
          else   cout << dis[i][j] << " ";
        }
        cout << endl;
    }



    // applying algorithm
    for(int k=1; k<=n; k++)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {

                 cout <<i <<k << " " << k << j<< " "<<i << j  << endl;
                //cout << k << " " << i << " " << j << endl;
                // if(dis[i][k] + dis[k][j] < dis[i][j])
                // {
                //     dis[i][j] = dis[i][k] + dis[k][j];
                // }
            }
            cout << endl;
        }
    }


/*

    cout << "After applying algo" << endl;

        //printing for checking algorithm 
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
          if(dis[i][j] == INF) cout << "x" << " ";
          else   cout << dis[i][j] << " ";
        }
        cout << endl;
    }
*/
    return 0;
}