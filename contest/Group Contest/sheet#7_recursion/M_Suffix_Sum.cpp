#include<bits/stdc++.h>
using namespace std;

long long suf_sum(int n, int l,int ar[]){
    if(l == 0) return 0;
    return (long long) ar[n-1] + suf_sum(n-1,l-1,ar);
}
int main()
{
    int n,l; cin >> n >> l;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    cout << suf_sum(n,l,ar);
    return 0;
}