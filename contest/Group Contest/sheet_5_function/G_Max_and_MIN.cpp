#include<bits/stdc++.h>
using namespace std;

int get_min(int n, int ar[]){
    int mn = INT_MAX;
    for(int i=0; i<n; i++)
        if(ar[i] < mn)
            mn = ar[i];
    return mn;
}

int get_max(int n, int ar[]){
    int mx = INT_MIN;

    for(int i=0; i<n; i++)
        if(ar[i] > mx)
            mx = ar[i];
    return mx;
}
int main()
{
    int n; 
    cin >>n;
    int ar[n];
    for(int i=0; i<n; i++)
        cin >> ar[i];

    cout << get_min( n,ar) << " ";
    cout << get_max( n,ar);
    return 0;
}