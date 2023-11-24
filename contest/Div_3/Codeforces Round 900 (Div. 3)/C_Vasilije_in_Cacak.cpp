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
    ll n,k,x;
    cin >> n >> k >> x;

    ll mini = k*(k+1)/2;
    ll dif = n-k;
    ll maxi = n*(n+1)/2 - dif*(dif+1)/2;

    if(x < mini || x > maxi)
        cout << "NO\n";
    else cout << "YES\n";

}
int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}