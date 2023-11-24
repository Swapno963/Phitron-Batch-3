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
    int n,sr; cin >> n >> sr;
    int ar[n];
    for(int i=0; i<n; i++)
        cin >> ar[i];

    int start = 0, end = n-1;
    int res = -1;
    while(start <= end)
        {
            int mid = start + (end - start) /2 ;
            if(ar[mid] == sr) 
            {
                res = mid;
                start = mid + 1;
            }
            else if(ar[mid] > sr)
            {
                end = mid-1;
            }
            else{
                start = mid +1;
            }
        }

        cout << res << endl;
}
int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}