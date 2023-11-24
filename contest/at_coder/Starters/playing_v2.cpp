#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int ar[n];
        for(int i=0; i<n; i++)
            cin >> ar[i];


        int odd_count = 0;
       for(int i=0; i<n-k+1; i++){
        int result = 0;
        for(int j=i; j<i+k; j++)
            result |= ar[j];

        if(result %2 !=0) odd_count++;
        // cout << result << endl;
       }
       
        cout << odd_count << endl;
    }
    return 0;
}