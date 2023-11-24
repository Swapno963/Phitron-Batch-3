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
        int n;cin>>n;
        int m=n*(n-1)/2,b[m];
        for(int i=0;i<m;i++)cin>>b[i];
        sort(b,b+m);
        for(int i=0;i<m;i+=--n)cout<<b[i]<<' ';
        cout<<"1000000000\n";
}
int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}