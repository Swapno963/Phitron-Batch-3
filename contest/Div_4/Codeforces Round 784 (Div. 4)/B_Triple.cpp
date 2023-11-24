#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int ans = 0;
        vector<int> frq(n+1,0);
        for(int  i=0; i<n; i++){
            int x; cin >> x; 
            if(++frq[x] >= 3){
                ans = x;
            }
        }
        if(ans != 0) cout << ans << endl;
        else cout << -1 << endl;
    }
    return 0;
}