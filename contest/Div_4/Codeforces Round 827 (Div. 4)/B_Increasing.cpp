#include<bits/stdc++.h>
using namespace std;
int main()
{
    //  can make the array strictly increasing
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());

        bool flag = true;
        for(int i=0; i<n-1; i++){
          if(v[i] == v[i+1]){
            flag = false;
          }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}