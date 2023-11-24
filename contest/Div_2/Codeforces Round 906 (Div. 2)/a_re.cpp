#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        map<int ,int> occ;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            occ[x]++;
        }
        // cout << occ.size()<< endl;
        if(occ.size() >= 3) cout << "No\n";
        else{
            if(abs(occ.begin()->second - occ.rbegin()->second) <= 1){
                cout << "Yes\n";
            }   
            else cout << "No\n";

        }

    }
    return 0;
}