#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x; cin >> n >> x;
    int a[n+1];
    for(int i=1; i<=n; i++) cin >> a[i];
    int ini = 0;
    long long fina = 1e16;
    int mid;

    while(fina - ini > 1){
        mid = (ini + fina) /2;
        int rem = x;
        int flag = 0;
        for(int i=1; i<=n; i++){
            if(a[i] < mid)
                rem = mid - a[i];
            if(rem < 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0) ini = mid;
    }
    cout << ini << "\n" << endl;
}
int main()
{
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}