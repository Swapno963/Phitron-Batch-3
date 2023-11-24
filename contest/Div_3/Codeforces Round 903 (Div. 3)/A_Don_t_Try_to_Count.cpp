#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b; cin >> a >> b;
    string x,s; 
    cin >> x >> s;
    int i;
    for(i=0; i<10; i++){
        // cout << x << " " <<x.find(s) <<"-"<< x.npos << endl;
        if(x.find(s) != x.npos){
            break;
            
        }
        x += x;
    }
    if(i == 10) cout << -1 << endl;
    else cout << i << endl;
}
int main()
{
    
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}