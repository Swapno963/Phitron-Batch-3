#include<bits/stdc++.h>
using namespace std;
bool can_create = false;
int knapsac(int n,int arr[], int x)
{
    // base case 
    if(n == 0 ) return 0;

    int op1 = knapsac(n-1, arr, x) + arr[n-1];
    int op2 = knapsac(n-1, arr, x) - arr[n-1];
    cout << op1 << " " << op2 << endl;
    if(op1 >= x) return op1;
    else return op2;
}
int main()
{
    int n, x; 
    cin >> n >> x;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    knapsac(n,arr,x);
    return 0;
}