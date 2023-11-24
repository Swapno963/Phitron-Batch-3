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
#define all(ar) ar.begin(),ar.end()

void solve(){
    ll n,k = INT_MAX;
    ll a,b;
    vpl v;
    cin >> n;
    for(ll i=0; i<n; i++){
        cin >> a >> b; 
        v.push_back({a,b});
    }

    for(ll i=0; i<(ll)v.size(); i++){
        k = min(v[i].first + (v[i].second-1)/2, k);
    }
    cout << k << endl;
}
int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}