#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; int m;

    // taking first arr input
    cin >> n;
    int ar1[n+1];
    for(int i=0; i<n; i++)
    cin >> ar1[i];

    // taking second arr input
    cin >> m;
    int ar2[m+1];
    for(int i=0; i<m; i++)
    cin >> ar2[i];

    ar1[n] = INT_MIN;
    ar2[m] = INT_MIN;

    int lp=0; int rp=0;
    int nums[n+m];
    for(int i=0; i<=n+m; i++)
    {
        if(ar1[lp]>=ar2[rp])
        {
            nums[i] = ar1[lp];
            lp++;
        }
        else
        {
            nums[i] = ar2[rp];
            rp++;
        }
    }
    for(auto i:nums) cout << i << " ";

    return 0;
}