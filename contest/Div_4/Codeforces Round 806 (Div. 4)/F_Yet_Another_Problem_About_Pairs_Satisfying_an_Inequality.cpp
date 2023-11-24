#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
bool solve(){
    ll n, ans = 0;
    cin >> n;
    vector<ll> v(n+1,0),pref(n+1,0);

    for(ll i=1; i<=n; i++)
        cin >> v[i];

    for(ll i=1; i<=n; i++){
        pref[i] = pref[i-1] + (v[i]<i);
    }


    for(ll i=1; i<=n; i++){
        if(v[i]<i)
            if(v[i])
                ans += pref[v[i]-1];
    }
    cout << ans << endl;
    return true;
}
int main()
{
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}