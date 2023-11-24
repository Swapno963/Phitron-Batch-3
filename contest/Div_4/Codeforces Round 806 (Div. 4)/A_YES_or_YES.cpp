#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
       
        if(tolower(s[0]) != 'y' || tolower(s[1]) !='e' || tolower(s[2]) !='s'){
            cout << "NO\n";
        }
        else cout << "YES\n";
        
    }
    return 0;
}