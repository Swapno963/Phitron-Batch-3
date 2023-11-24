#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        string s; cin >> s;
        map<char,int> mp;

        // count frequency
        for(int i=0; i<n; i++)
            mp[s[i]]++;

        int cunt = 0;
        for(auto it : mp)
            if(it.second%2!=0) 
                cunt++;

        if(cunt-1<0) cunt = 0;
        else cunt = cunt-1;

        if(k>=cunt && k <=n)
            cout << "YES\n";
        else cout <<"NO\n";
        
    }
    return 0;
}