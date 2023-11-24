#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int mx = 0;
        char c;
        for(int i=0; i<n; i++){
            cin >> c;
            if(c-'a' > mx)
                mx = c-'a';
        }
        cout << mx+1<< endl;
    }
    return 0;
}