#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n,k; cin >> n >> k; 
    ll ans  = 1;
    for(ll i = 0; i<k; i++){
        ans = (ans * n) % mod;
    }
    cout << ans << endl;
}
int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}