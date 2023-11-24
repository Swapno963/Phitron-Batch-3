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
const int MAXN = 1010;
int n;
string A[MAXN];
int solve() {
    int ans = 0;
    for (int i = 0; i * 2 < n; ++i)
        for (int j = 0; j * 2 < n; ++j) {
            vector<char> M {A[i][j],
                            A[n - 1 - j][i], 
                            A[n - 1 - i][n - 1 - j], 
                            A[j][n - 1 - i]};
            char c = *max_element(all(M));
            for(char e: M)
                ans += c - e;
        }
    return ans;
}

int main()
{
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> A[i];
        }
        cout << solve() << endl;
        
    }
    return 0;
}