#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        string s; cin >> s;

        int ar[26];
        memset(ar,0,sizeof(ar));
        
        int bel = 0;
        for(int i=0; i<n; i++){
            if(ar[s[i]-'A'] == 0){
                ar[s[i]-'A'] = 1;
                bel +=2;
            }
            else bel++;
        }
        cout << bel << endl;
    }
    return 0;
}