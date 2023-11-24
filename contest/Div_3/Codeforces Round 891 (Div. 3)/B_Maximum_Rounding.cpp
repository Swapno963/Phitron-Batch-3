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
    string s; cin >> s;
    s = '0' + s;
    int n = s.size();
    int zeros = n;

    for(int i=n-1; i>=0; i--){
        if(s[i] >= '5'){
            s[i] = '0';
            zeros = i;
            int j = i-1;

            while(s[j] == '9'){
                s[j] = '0';
                j--;
            }
            s[j]++;
        }
    }


    for(int i=zeros; i<n; i++){
        s[i] = '0';
    }

    if(s[0] == '0'){
        s = s.substr(1);
    }
    cout << s << endl;
}
int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}