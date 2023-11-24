#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int knapsak(int n, int s, int v[], int w[])
{
    // base case
    if(n == 0 || s == 0) return 0;

    // meroization
    if(dp[n][s] != -1) return dp[n][s];

    if(w[n-1] <= s)
    {
        int op1 = knapsak(n-1,s-w[n-1],v,w) + v[n-1];
        int op2 = knapsak(n-1,s,v,w);
        return dp[n][s] = max(op1,op2);
    }
    else
    {
        return dp[n][s] = knapsak(n-1,s,v,w);
    }
}   

int main()
{
    int n;
    cin >> n;
    int v[n], w[n];

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> w[i];
    }

    int s;
    cin >> s;

    for(int i=0; i<= n; i++ )
    {
        for(int j=0; j <= n; j++)
        {
            dp[i][j] = -1;
        }
    }
    knapsak(n,s,v,w);

    return 0;
}