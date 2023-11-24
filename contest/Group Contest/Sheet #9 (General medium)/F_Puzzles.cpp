#include<bits/stdc++.h>
using namespace std;
int main()
{
    int take,n;
    cin >> take >> n;
    vector<int> v;
    for(int i=0; i<n;i++){
        int x; cin >> x;
        v.push_back(x);
    }


    sort(v.begin(), v.end());
    // ar.sort();
    // cout << v[take-1] - v[0] << endl;
    // for(int i=0; i<n;i++)
    //     cout << v[i] << " ";
    int dif = INT_MAX;
    for(int i=0; i<n-take; i++){
        // cout << v[i] << " " << v[i+take] << endl;
        if(dif > (v[i+take-1] - v[i])){
            dif = v[i+take-1] - v[i];
            // cout << dif << endl;
        
        }
    }
    cout << dif << endl;
    return 0;
}