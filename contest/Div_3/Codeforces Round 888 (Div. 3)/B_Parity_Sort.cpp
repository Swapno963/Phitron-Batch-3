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
    int n; cin >>n;
    vector<int> a;
    for(int i = 0; i < n; i++){
        int x; cin >>x;
        a.push_back(x);
    }

    vector<bool> is_odd(n+1);
    vector<int>even,odd;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            even.push_back(a[i]);
        }
        else{
            is_odd[i] = true;
            odd.push_back(a[i]);
        }
    }

    sort(even.begin(),even.end(),greater<int>());
    sort(odd.begin(),odd.end(),greater<int>());


    int e = 0;
    int o = 0;
    for(int i=0; i<n; i++){
        if(is_odd[i] == true){
            a[i] = odd.back();
            odd.pop_back();
        }
        else{
            a[i] = even.back();
            even.pop_back();
        }
    }


    bool is_sort = true;
    for(int i=1; i<n; i++){
        if(a[i-1] > a[i]){
            is_sort = false;
            break;
        }
    }
    if(is_sort) cout << "YES" << endl;
    else cout << "NO" << endl;

}
int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}