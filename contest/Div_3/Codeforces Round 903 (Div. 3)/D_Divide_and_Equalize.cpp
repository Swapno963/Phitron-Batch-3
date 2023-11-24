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


map<int, int> Factor;
void primeFactor(int n){
    for(int i=2; i*i <=n; i++){
        while(n%i == 0){
            n /= i;
            Factor[i]++;
        }
    }
    if(n > 1) Factor[n]++;
}
void solve(){
    Factor.clear();
    int n; cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin >> vec[i];
        primeFactor(vec[i]);
    }

    bool ok = true;
    for(auto it:Factor){
        if(it.second % n != 0){
            ok = false;
            break;
        }
    }

    if(ok) cout << "YES\n";
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