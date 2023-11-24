#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    If Kirito starts duelling with the i-th (1 ≤ i ≤ n) dragon and Kirito's strength is not greater than the dragon's strength xi, then Kirito loses the duel and dies. But if Kirito's strength is greater than the dragon's strength, then he defeats the dragon and gets a bonus strength increase by yi.

    Kirito can fight the dragons in any order.  
    */

    int stg,q,ds,bs;
    bool is_pos = true;
    vector<pair<int , int >> v;
    cin >> stg >> q;
    while(q--){
        cin >> ds >> bs;
        v.push_back({ds,bs});
    }
    sort(v.begin(),v.end());
    for(auto a:v){
        if(a.first < stg){
            stg += a.second;
        }
        else is_pos = false;
        // cout << a.first << " " << a.second << endl;
    }

    if(is_pos) cout <<"YES\n";
    else cout << "NO\n";
    return 0;
}