#include<bits/stdc++.h>
using namespace std;
void print_in_reverse(int n, int arr[])
{
    if(n == 0) return;
    cout << arr[n-1] << " ";
    print_in_reverse(n-1,arr); 
}
int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    // recursion call
    print_in_reverse(n,arr);
    return 0;
}