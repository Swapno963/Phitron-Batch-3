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
    float a,b, c;
    cin >> a >> b >> c;
    if(a == b) cout << 0 << endl;
    else {
        float x = ((max(a,b)-min(a,b))/2) / c ;
        cout << ceill(x)<< endl;
    }
}
int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}