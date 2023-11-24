#include<bits/stdc++.h>
using namespace std;
void solve(){
    char a ;  cin >> a;
    // codeforces
    if(a == 'c' || a == 'o' || a == 'd' || a == 'e' || a == 'f' || a =='r' || a == 's')
        cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}