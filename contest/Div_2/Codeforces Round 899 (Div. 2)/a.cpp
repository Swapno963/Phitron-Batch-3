#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >>t;
    while(t--)
    {
        int st = 1;
        int n; cin >> n;
        int ar[n];
        for(int i=0; i<n; i++)
            cin >> ar[i];
        int arr[n];
        for(int i=0; i<n; i++)
        {
            if(ar[i] == st) {
                arr[i] = st+1;
                st = arr[i]+1;
            }
            else {
                arr[i] = st;
                st++;
            }
        }
       // for(auto a:arr) cout << a << " ";


    cout <<arr[n-1] << endl;

    }
    return 0;
}