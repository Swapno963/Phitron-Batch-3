#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,k; cin >> n >> k;
        int ar[n];
        bool flag = false;
        for(int i=0; i<n; i++)
            {
                cin >> ar[i];
                if(ar[i] == k) 
                    flag = true;
            }
            if(flag) cout << "YES" << endl;
            else cout << "NO" << endl;
    }
    return 0;
}