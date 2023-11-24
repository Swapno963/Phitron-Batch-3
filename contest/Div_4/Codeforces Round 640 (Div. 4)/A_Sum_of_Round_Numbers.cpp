#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        string s ; cin >> s;
        int n = s.size();

        cout << n - count(s.begin(), s.end(),'0') << endl;

        for(int i=0; i<n; i++){
            if(s[i] != '0'){
                cout << s[i] << string(n-i-1,'0')<< ' ';
            }
        }

        cout << endl;
    }
    return 0;
}