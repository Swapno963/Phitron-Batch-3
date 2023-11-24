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
    int n,m;// the size of matrix
    cin >> n >> m;
    int ar[n][m];

    // take the matrix input
    for(int i =0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> ar[i][j];
        }
    }

    // sum of row wise
    for(int i =0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
            sum += ar[i][j];
            ar[i][j] = sum; 
        }
        cout << endl;
    }

    // soum of column wise
    for(int i =0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
            sum += ar[j][i];
            ar[j][i] = sum; 
        }
        cout << endl;
    }

    // output the matrix 
    for(int i =0; i<n; i++){
        for(int j=0; j<m; j++){
            cout <<  ar[i][j] << " ";
        }
        cout << endl;
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