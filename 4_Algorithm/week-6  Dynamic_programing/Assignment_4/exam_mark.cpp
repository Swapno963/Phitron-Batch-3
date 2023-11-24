#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int exam_mark; cin >> exam_mark;

        int ar[n]; 
        for(int i=0; i<n; i++)
        {
            cin >> ar[i];
        }


        if(exam_mark == 1000)
            cout << "YES" << endl;
        else{

            
                int need = 1000 - exam_mark;
                int dp[n+1][need+1];
                dp[0][0] = true;
                for(int i=1; i<=need; i++)
                    dp[0][i] = false;

                for(int i=1; i<=n; i++)
                {
                    for(int j=0; j<=need; j++)
                    {
                        if(ar[i-1] <= j)
                            dp[i][j] = dp[i-1][j-ar[i-1]] || dp[i-1][j];
                        else dp[i][j] = dp[i-1][j];
                    }
                }
                if(dp[n][need]) cout << "YES" << endl;
                else cout << "NO" << endl;

                //     for(int i=0; i<=n; i++)
                // {
                //     for(int j=0; j<=need; j++)
                //     {
                //         cout << dp[i][j] << " ";
                //     }
                //     cout << endl;
                //     }

            }


    }

    return 0;
}