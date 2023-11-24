#include<bits/stdc++.h>
using namespace std;
int abs_co(int x ,int y,int x2,int y2){
    // cout << x <<" " << y << " " << x2 << " " << y2<<endl;
    return abs(x2-x) + abs(y2-y);
}
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        vector<int> v;
        for(int i=0; i<2*n; i++){
            int x; cin >>x; 
            v.push_back(x);
        }

        sort(v.begin(), v.end());


        int dis = 0;
        int x =0,y=1;
        for(int i=0; i<n-1; i++){
            dis += abs_co(v[x],v[y],v[x+2],v[y+2]);
            x += 2;
            y += 2;
        }
        cout << dis<< endl;
    }  // cout << dis << endl;
    return 0;
}