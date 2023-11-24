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
        ll b,n,resMax = 0;
        cin>>n;
        vector < ll > pre;
        ll sum = 0;
        pre.push_back(0);
        for(ll i = 0 ; i < n ;i++) {
            cin>>b;
            sum+=b;
            pre.push_back(sum);
        }
        
        for(ll i = 1; i <= n; ++i) {
            vector < ll > v;
            if(n % i == 0) {
                for(ll j = i; j <= n ; j+=i) {
                    sum = pre[j]-pre[j-(i)];
                    v.push_back(sum);
                    // cout <<"i is "<< i << " sum "<< sum << " \n";
                }
                sort(v.begin(),v.end());
                resMax = max(resMax, v[(ll)v.size()-1]-v[0]);
                // cout << "i,j " << i <<" " << j << "resmax : "<< resMax << endl;
            }
        }
        // cout<<resMax<<endl;
        cout << "\n\n\n";
}
int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}