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

int solve(){
    int n; cin >> n;
    int ar[n];
    for(int i=0; i<n; i++)
        cin >> ar[i];

    int start = 0, end = n-1;
    while(end >= start){
        if (ar[start]<=ar[end])
        {
            return ar[start];
        }
        int mid = (start + end)/2;
        int next = (mid+1)%n;
        int pev = (mid+n-1)%n;


        if(ar[mid] <= ar[next] && ar[mid] <= pev)
            return ar[mid];
        else if(ar[start] <= ar[mid])
            start = mid + 1;
        else if(ar[mid] <= ar[end])
            end = mid - 1;

    }
}
int main()
{
    int t; cin >> t;
    while(t--){
       cout <<  solve();
    }
    return 0;
}