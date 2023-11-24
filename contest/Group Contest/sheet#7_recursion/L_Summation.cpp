#include<bits/stdc++.h>
using namespace std;
long long sum = 0;
long long get_sum(int n,int ar[]){
    if(n == 0) return 0;
    // cout << n-1 << " ";
    // sum +=(long long) ar[n-1];
    // get_sum(n-1,ar);

    return (long long)ar[n-1] + get_sum(n-1,ar);
}
int main()
{
    int n; cin >> n;
    int ar[n];
    for(int i=0; i<n; i++)
        cin >> ar[i];

    cout <<get_sum(n,ar);
    // cout << sum;
    return 0;
}