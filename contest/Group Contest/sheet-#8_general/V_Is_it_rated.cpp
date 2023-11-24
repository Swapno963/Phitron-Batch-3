#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int m = n;
    vector<pair<int,int>> v;
    while(n--){

        int a,b; cin >> a >> b;
        v.push_back({a,b});
    }
    string s = "maybe";
    // cout << m;
    for(int i=1; i<m; i++){
      if(v[i].first == v[i].second && v[i-1].first == v[i-1].second){
            if(v[i].first > v[i-1].first){
                s = "maybe";
                break;}
            if(v[i].first > v[i-1].first)
            {
                s = "unrated";
                break;
            }
        }
        else{ 
            s = "rated";}
    }
    cout << s <<endl;
    return 0;   
}