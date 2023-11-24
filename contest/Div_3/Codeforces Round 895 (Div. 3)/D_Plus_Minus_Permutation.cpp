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
    ll n,x,y;
    cin >> n >> x >> y;
    ll a = n/x;
    ll b = n/y;
    ll lcm = (x*y) / __gcd(x,y);
    ll c = n/lcm; // the common numbers those are devided by x and b;
    ll a1 = a -c;
    ll b1 = b - c;
    cout << (n*(n+1)/2) - ((n-a1)*(n-a1+1)/2) - (b1*(b1+1)/2) << endl;
}
int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}