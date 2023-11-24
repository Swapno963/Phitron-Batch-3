#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n; cin >> n; 
    long long ar[n];
    for(long long i=0; i<n; i++)
        cin >>ar[i];
    
    long long x = ar[0];
    for(long long i=1; i<n; i++)
        x &= ar[i];

    cout << x << endl;
}
int main()
{
    int t; cin >> t;
     while(t--)
        solve();
    return 0;
}