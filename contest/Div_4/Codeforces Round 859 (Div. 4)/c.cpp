#include<bits/stdc++.h>
using namespace std;
void solve()
{
    cout << "Start solve : " << endl;
    int n; cin >> n;
    string s; cin >> s;
    int mp[26];
    memset(mp,-1,sizeof(mp));

    for(int i=0; i<n; i++)
    {
        int cur = s[i] - 'a';
        cout << cur << " ";
        if(mp[cur] == -1)
        {
            mp[cur] = i%2;
        }
        else{
            if(mp[cur] != i%2){
                cout << "NO\n";
                return;
            }
        }

    }
    for(auto a : mp) cout << a << " ";
    cout << "YES\n"; 

}
int main()
{
    int tt; cin >> tt;
    for(int i=0; i<tt; i++)
    {
        solve();
    }
    return 0;
}