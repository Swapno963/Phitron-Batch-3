#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
const lld pi = 3.14159265358979323846;
#define mod 1000000007

void solve(){
    int n; cin >> n; 
    vector<ll> cnt(50);
    int a[n];

    for(ll i=0; i<n; i++){
        cin >> a[i];

        ll MSB = 63 - __builtin_clzll(a[i]);
        ++cnt[MSB];
    }

    ll ans = 0;
    for(ll i=0; i<50; i++){
        ans += cnt[i] * (cnt[i] - 1) /2;
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