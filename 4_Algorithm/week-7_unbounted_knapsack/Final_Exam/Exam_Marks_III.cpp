#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case; cin >> test_case;
    while(test_case--)
    {
        int n, got_mark;
        cin >> n >> got_mark;
        int marks[n];
        for(int i=0; i<n; i++)
        {
            cin >> marks[i];
        }

        if(got_mark == 1000)
            cout << 0 << endl;
        else
        {
            int mark_needed = 1000 - got_mark;
            int dp[n+1][mark_needed+1];
            dp[0][0] = 0;
            for(int i=1; i<=mark_needed; i++)
                dp[0][i] = INT_MAX-1;
            
            for(int i=1; i<=n; i++)
            {
                for(int j=0; j<=mark_needed; j++)
                {
                    if(marks[i-1] <= j)
                        dp[i][j] = min(1+dp[i][j-marks[i-1]], dp[i-1][j]);
                    else dp[i][j] = dp[i-1][j];
                }
            }

            if(dp[n][mark_needed] == INT_MAX-1) cout << -1 << endl;
           else cout << dp[n][mark_needed]<< endl;
        }
    }
    return 0;
}