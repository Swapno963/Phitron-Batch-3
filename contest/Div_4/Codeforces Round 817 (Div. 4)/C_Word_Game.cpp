#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    map<string, int > mp;
    string a[3][n];

    for(int i=0; i<3; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
            mp[a[i][j]]++;
        }
    }


    for(int i=0; i<3; i++){
        int total = 0;
        for(int j=0; j<n; j++){
            // cout <<a[i][j]<< " " <<mp[a[i][j]] << "__";
            if(mp[a[i][j]] == 1) total += 3;
            if(mp[a[i][j]] == 2) total += 1;
        }
        cout << total <<  " ";
    }
    cout << endl;
}
int main()
{
    int t; cin >>t;
    while(t--)
        solve();
    return 0;
}