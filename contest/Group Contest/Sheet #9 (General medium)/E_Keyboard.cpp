#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./",s2;
    char a; cin >> a>> s2;
    for(int i=0; i<s2.size(); i++){
        int ind = s.find(s2[i]);
        if(a == 'R'){
            cout << s[ind-1];
        }
        else cout << s[ind+1];
        // cout << s.find('a') << endl;
    }
    
    return 0;
}