#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int ar[n];
    for(int i=0; i<n; i++)
        cin >> ar[i];

    // babul sort
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(ar[j] > ar[j+1])
                swap(ar[i],ar[j+1]);
        }
    }

    for(int i=n-1; i>=0; i--)
        cout << ar[i] << " ";
    return 0;
}