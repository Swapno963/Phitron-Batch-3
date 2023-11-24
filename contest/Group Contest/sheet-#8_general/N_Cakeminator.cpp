#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; cin >> n >> m;
    vector<pair<int,int>> v;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++){
            char a; cin >> a;
            if(a =='S') v.push_back({i,j});
        }
    int ar[n+1][m+1];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++){
            
            
        }
    for(auto a : v) cout << a.first << " "<< a.second <<" ";

    return 0;
}