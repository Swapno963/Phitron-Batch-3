#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int sum = 0;
        int mn = INT_MAX;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            sum += x;
            if(x < mn)
                mn = x;
        }
        cout << sum-mn << endl;
    }
    return 0;
}