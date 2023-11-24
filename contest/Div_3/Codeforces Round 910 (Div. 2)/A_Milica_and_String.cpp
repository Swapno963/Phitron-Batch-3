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
    int n,k;
    cin>>n>>k;
    string s; cin >>s;
    int have = 0;
    for(int i=0; i<n; i++){
        if(s[i] == 'B')
            have++;
    }

    if(have == k)
        cout << 0 << endl;
    else{
        if(have < k){
            int count = 0;
            for(int i=0; i<n; i++){
                if(s[i] == 'A') count++;
                if(count == k -have){
                    cout << 1 << endl << i + 1 <<" " << 'B' << endl;
                    break;
                }

            }
        }
        else{
            int count  = 0;
            for(int i=0; i<n; i++){
                if(s[i] == 'B') count++;
                if(count == have-k){
                    cout << 1 << endl << i + 1 <<" " << 'A' << endl;
                    break;
                }

            }
        }
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