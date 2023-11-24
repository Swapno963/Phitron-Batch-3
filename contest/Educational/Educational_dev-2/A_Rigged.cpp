#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int e[n],s[n];
        int ans = 1;
        for(int i=0; i<n; i++)
        {
            cin >> e[i] >> s[i];
        }
        for(int i=1; i<n; i++)
        {
            if(e[i] >= e[0] && s[i] >= s[0])
            {
                ans = 0;
                break;
            }       
        }

        if(ans == 0) cout << -1 << endl;
        else cout << e[0]-1 << endl;
    }
    return 0;
}