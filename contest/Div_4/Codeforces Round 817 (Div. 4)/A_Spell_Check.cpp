#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string cp = "Timur";
        sort(cp.begin(),cp.end());

        string s; cin >> s;
        sort(s.begin(),s.end());

        if(cp == s) cout << "YES\n";
        else cout << "NO\n";

    }
    return 0;
}