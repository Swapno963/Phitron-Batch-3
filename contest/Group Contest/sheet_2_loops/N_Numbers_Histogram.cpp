#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a; cin >> a;
    int n;  cin >> n;
    int ar[n];
    for(int i=0; i<n; i++)
        cin >> ar[i];
    
    for(auto x : ar)
    {
        for(int i=0; i<x; i++)
            cout << a;
        cout << endl;
    }

    return 0;
}