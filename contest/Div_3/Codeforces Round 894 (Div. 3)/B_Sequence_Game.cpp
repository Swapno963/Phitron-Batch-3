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
    vi v; 
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    vi ans;
    ans.push_back(v[0]);
    for(int i=1; i<n; i++){
        if(v[i-1] <= v[i])
            ans.push_back(v[i]);
        else{
            ans.push_back(v[i]);
            ans.push_back(v[i]);
        }    

    }
    cout << ans.size() << endl;
    for(auto a : ans) cout << a << " ";
    cout << endl;
}
int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}