#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;  cin >> n;
    string s,t; cin >> s;
    t += s[0];
    

    for(int i=1; i<n; i++)
    {
        // cout << t[i-1] << s[i] << endl;
        if(t[t.length()-1] != s[i]){
             //cout << t[t.length()-1] << s[i] << endl;
            t += s[i];

        } 
    }

    cout << t.length() ;
    return 0;
}