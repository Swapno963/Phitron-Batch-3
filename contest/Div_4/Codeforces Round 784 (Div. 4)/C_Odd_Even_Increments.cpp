#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n+1);
        int ok = 1;
        for(int i=0; i<n; i++){
            cin >> v[i];
            v[i] %= 2;
            if(v[i]%2 != v[i%2]) ok = 0;
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}