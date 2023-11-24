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


 int n,sr; 
 vector<int> ar;


int give_ind(string s){
    int start = 0, end = n-1;
    int res = -1;
    while(start <= end)
        {
            int mid = start + (end - start) /2 ;
            if(ar[mid] == sr) 
            {
                if(s == "first"){
                    res = mid;
                    end = mid - 1;
                }
                else{
                    res = mid;
                    start = mid + 1;
                }
            }
            else if(ar[mid] > sr)
            {
                end = mid-1;
            }
            else{
                start = mid +1;
            }
        }
        return res;
}

void solve(){
    cin >> n >> sr;
     for(int i=0; i<n; i++){
        int x; cin >> x;
        ar.push_back(x);
    }
    cout <<give_ind("last") - give_ind("first") + 1 << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}