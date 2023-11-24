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
    ll n; cin >> n;
    vl v(n+1),rotated(n+1);
    for(ll i=1; i<=n; i++)
        cin >> v[i];

    if(v[1] != n){
        cout << "NO\n";
        return;
    }
    
    for(ll i=1; i<=n; i++){
        rotated[v[i]]++;
    }

    // for(int i=1; i<=n; i++)
    //     cout << rotated[i] << " ";
    // cout << endl;

    for(ll i=n-1; i>=1; i--){
        rotated[i] += rotated[i+1];
    }
    // for(int i=1; i<=n; i++)
    //     cout << rotated[i] << " ";
    // cout << endl;
    // cout << endl;

    if(rotated == v)
        cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}