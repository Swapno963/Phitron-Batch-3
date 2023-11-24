#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >>n;
    long long int arr[n];
    cin >> arr[0];
    for(int i=1; i<n; i++)
    {
        int x; cin >> x;
        arr[i] = arr[i-1] + x;
    }

    for(int i= n-1; i>=0; i--)
    {
        cout <<arr[i] << " ";
    }
    return 0;
}