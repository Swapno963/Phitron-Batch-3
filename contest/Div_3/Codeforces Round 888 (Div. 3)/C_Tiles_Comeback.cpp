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
    int n,k; cin >> n >> k;
    vi v;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        v.push_back(x);
    }
    if(v[0] == v[n-1]){
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(v[i] == v[0])
                cnt++;
            if(cnt%k == 0){
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
        return;
    }
    else{
        int s =-1,e=-1;
        int cnt = 0;
        for(int i=0;i<n; i++){
            if(v[i] == v[0])
                cnt ++;
            if(cnt%k == 0){
                s = i;
                break;
            }
        }

        cnt = 0;
        for(int i=n-1; i>=0; i--){
            if(v[i] == v[n-1])
                cnt ++;
            if(cnt%k == 0){
                e = i;
                break;
            }
        }
        if(s != -1 && e != -1 && s < e){
            cout << "YES" << endl;
            
        }
        else{
            cout << "NO" << endl;
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