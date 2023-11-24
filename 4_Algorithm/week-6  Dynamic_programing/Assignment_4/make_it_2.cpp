#include<bits/stdc++.h>
using namespace std;
int main()
{

        int s; cin >>s;
        bool dp[1005];
        dp[1] = true;

        for(int i=2; i<=s; i++)
        {
            if(dp[i / 2]) dp[i] = true;
            if(dp[i - 3]) dp[i] = true;
        }

    
            for(int j=0; j<=s; j++)
            {
                cout << dp[j] << " ";
            }
          

    
    return 0;
}