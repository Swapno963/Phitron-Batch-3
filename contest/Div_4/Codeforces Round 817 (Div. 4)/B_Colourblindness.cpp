#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s,d; cin >> s >> d;
        bool flg = true;
        for(int i=0; i<n; i++){
            if(s[i] == 'R'){
                if(d[i] != 'R'){
                    flg = false;
                    continue;
                }
            }
            if(s[i] == 'G' || s[i] == 'B'){
                if(d[i] == 'R'){
                    flg= false;
                    continue;
                }

            }
        }
        if(flg) cout << "YES\n";
        else cout << "NO\n";

    }
    return 0;
}