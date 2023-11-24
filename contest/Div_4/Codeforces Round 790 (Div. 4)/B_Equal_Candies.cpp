#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    int count = 0;
    int mn = INT_MAX;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
        if(ar[i] < mn)
            mn = ar[i];
    }

    for(int i=0; i<n; i++){
       if(ar[i] > mn){
        count += ar[i] - mn;
       }
    }
    
    cout << count << endl;
}
int main()
{
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}