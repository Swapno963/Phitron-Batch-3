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
    int l,r;
    cin >> l >> r;
    for(int i=l; i<=r && i <= l+5; i++){
        int x = i;
        for(int j=2; j*j <=x; j++){
            if(x%j == 0){
                if(j<x)
                    {
                        cout << j << " " << x-j << endl;
                        return;
                    }
            }
        }
    }
    cout << "-1\n";
}
int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}