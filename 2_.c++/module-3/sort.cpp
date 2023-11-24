#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

// taking input
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }

// apply sort decendeing algorithm
    sort(arr,arr+n,greater<int>());
// giving output
     for(int i=0;i<n;i++){
        cout <<arr[i] <<" ";
    }
    return 0;
}