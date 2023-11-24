#include<bits/stdc++.h>
using namespace std;
void print_first_last(int f,int l,int arr[])
{
    cout << arr[f] << " " << arr[l]<< endl;
    if(f == l) return;

    print_first_last(f+1,l-1,arr);
}
int main()
{
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    print_first_last(0,n-1,arr);
    return 0;
}