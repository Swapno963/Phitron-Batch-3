#include<bits/stdc++.h>
using namespace std;
int main()
{// can be solved by sorting
    int n,x; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++){
        
    }
    // for(int i=0; i<n; i++)
    // {int mn = INT_MAX,mx = INT_MIN; 
    //     for(int j=0; j<n; j++){
    //         if(i != j){
    //             int dif = abs(ar[i]-ar[j]);
    //             if(dif < mn)
    //                 mn = dif;
    //             if(dif > mx)
    //                 mx = dif;
    //         }
    //     }
    //     cout << mn << " " << mx << endl;
    // }


    return 0;
}