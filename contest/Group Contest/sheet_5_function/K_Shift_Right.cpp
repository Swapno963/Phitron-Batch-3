#include<bits/stdc++.h>
using namespace std;

void swap_ele(int n, int x ,int ar[]){
    int ed = n -1;
    int st = n - x;
    if(st < 0) st = 0;
    // cout << ed<< st ;

    int tem = ar[st];
    ar[st] = ar[ed];
    ar[ed] = tem;

     for(int i=0; i<n; i++)
        cout << ar[i] << " ";
}
int main()
{
    int n,x; cin >> n >> x;
    int ar[n];
    for(int i=0; i<n; i++)
        cin >> ar[i];
    swap_ele(n,x,ar);
    return 0;
}