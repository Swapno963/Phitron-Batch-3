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
    ll type,mid,midcr;
    cin >> type;
    ll high = 2e9, low =1;
    while(high - low > 1){
        mid = low + (high-low)/2;
        midcr= (mid*(mid-1))/2;
        if(midcr <= type){
            low = mid;
        }
        else 
        high = mid;
    }

    ll lowcr = (low*(low-1))/2;
    ll bal = type - lowcr;
    cout << low + bal << endl;
}
int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}