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
    cin >> n >> k;
    string s;
    cin >> s;
    int a[k]; int b[k];
    for(int i=0; i< k; i++){
        cin >> a[i]; 
        a[i]--;
    }
	for(int i=0; i< k; i++){
        cin >> b[i]; 
        b[i]--;
    }

    int q; cin >> q;
    int cnt[n+1] = {0};
    for(int i=0; i<q; i++){
        int x; cin >> x;
        cnt[x-1]++;
    }
    
    string ans = "";
    for(int i=0; i<k; i++){
        string s1 = s.substr(a[i],b[i]-a[i]+1);
        int sum = 0;
        int l = a[i];
        int r = b[i];

        for(int j=l; j<=(l+r)/2; j++){
				sum+=cnt[j]+cnt[r-j+l];
				if(sum&1)swap(s1[j-l], s1[r-j]);
			}
			ans+=s1;
    }

    cout << ans << endl;
}
int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}