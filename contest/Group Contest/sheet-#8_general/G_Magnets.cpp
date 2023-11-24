#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n; 
    string ar[n];
    for(int i=0; i<n; i++)
        cin >> ar[i];
    int count = 0;
    for(int i=0; i<n-1; i++){
        // cout << ar[i][0] << " ";
        if(ar[i][1] == ar[i+1][0]) count ++;
    }
    cout << count+1 ;
    return 0;
}