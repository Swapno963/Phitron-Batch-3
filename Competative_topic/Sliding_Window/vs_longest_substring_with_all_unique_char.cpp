#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;

    // algo starts
    int i=0, j=0;
    int mx_sz = 0;
    map<char,int> mp;
    mp.clear();

    while(j < s.length()){
        mp[s[j]]++;

       
        
        if(mp.size() == (j-i)+1){
            int sz = (j-i)+1;
            mx_sz = max(mx_sz,sz);
            j++;

            // testing purpose
            // for(auto a : mp)
            //     cout <<i<<" " << j <<"-" <<a.first << " " << a.second << endl;
            //     cout << endl;
        }
        else if(mp.size() < (j-i)+1){
            while(mp.size() < (j-i)+1){
                mp[s[i]]--;
                if(mp[s[i]] == 0){
                    mp.erase(s[i]);
                }
                i++;
            }
        }
        j++;

    }

    cout << mx_sz << endl;
    return 0;
}