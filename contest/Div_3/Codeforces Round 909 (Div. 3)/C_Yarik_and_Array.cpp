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
    int n; cin >> n; 
    int ar[n];
    for(int i =0; i<n; i++){
        cin >> ar[i];
    }
    int ans  = ar[0];
    int mn = min(0,ar[0]), sum = ar[0];

    for(int i=1; i<n; i++){
        if(abs(ar[i-1]%2) == abs(ar[i]%2 )){
          mn = 0;
          sum = 0;
        }
        sum += ar[i];
        ans = max(ans,sum-mn);
        mn = min(mn, sum);
        cout << sum << " " << ans << " " << mn << endl;
    }
    
    //  cout << ans << endl;
    cout << endl << endl << endl;
}
int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}