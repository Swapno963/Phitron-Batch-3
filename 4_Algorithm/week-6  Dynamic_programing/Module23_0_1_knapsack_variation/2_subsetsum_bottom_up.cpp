#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int s;
    cin >> s;

    bool dp[n+1][n+1]; // array ta n tomo ar value n-1 index a pawa jai
    dp[0][0] = true;
    for(int i=1; i<=s; i++)
    {
        dp[0][i] = false;  // 0 diea sudu 0 k kusi kora jabe, 1 ba ar besi kaukai 0 diea kusi kora jabe nah 
    }


    for(int i=1; i<=n; i++) //0 row ar kaj agei kora hoeaca tai 1 thek suru
    {
        for(int j=0; j<= s; j++)
        {
            if(a[i-1] <= j) // jodi ja lagbe setar thake array ar specefic valu soman ba kom hy
            {
                bool op1 = dp[i-1][j -a[i-1]]; //d[i-1] mane ager row ta jaw, [j -a[i-1]] jeta lagbe tar theke array ar akn kar index ar value bad dawa
                bool op2 = dp[i-1][j];

                dp[i][j] = op1 || op2; // j kono akta tru dilai true nibo, false nita hola 2 tai flase hota hobe
            }
            else
            {
                dp[i][j] = dp[i-1][j]; // ager row ar kace gigges korbe
            }

        }
    }


    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=s; j++)
        {
            if(dp[i][j]) cout <<"T" << " ";
            else cout <<"F" <<" ";
        }
        cout << endl;
    }


    // if(dp[n][s]) cout << "YES" << endl;
    // else cout << "NO" << endl;
    return 0;
}