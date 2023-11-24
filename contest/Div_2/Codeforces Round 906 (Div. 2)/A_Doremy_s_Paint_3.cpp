#include<bits/stdc++.h>
using namespace std;
bool is_pos(int ar[],int n){
    long long sum1 = ar[0]+ar[1];

    for(int i=1; i<n-1; i++){
        long long tem = ar[i] + ar[i+1];
            // cout <<ar[i] <<" " <<ar[i+1] << " "<<i<<endl;
        if(tem != sum1)
            return false;
    }
    return true;
}
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int ar[n];
        for(int i=0; i<n; i++)
            cin >> ar[i];

        // for(auto a:ar) cout << a << " "; cout << endl;
        bool is_done = false;
        for(int i=0; i<n-1; i++){
            swap(ar[i],ar[i+1]);
            is_done = is_pos(ar,n);
            if(is_done) break;
        }
        
        if(is_done) cout<< "YES\n";
        else cout<< "NO\n";

    }
    return 0;
}