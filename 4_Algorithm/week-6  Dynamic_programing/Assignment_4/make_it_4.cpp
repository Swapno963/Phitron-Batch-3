#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
int dp[N];

bool knapsack(int n, int p)
{   
    // base case
    if(n == p) 
        return  true;
    if(p>n) return false;
    if(dp[p] != -1) return dp[p];

    if((p <= n)) 
    {
        bool op1 = knapsack(n,p*2);
        bool op2 = knapsack(n,p+3);
        return dp[p] = op1 || op2;

    }
    else return false;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        fill(dp,dp+N,-1); // make all the element of dp to -1;
        if(knapsack(n,1)) cout << "YES" << endl;
        else cout << "NO" << endl;
        //cout << knapsack(n,1) << endl;



    }
    return 0;
}