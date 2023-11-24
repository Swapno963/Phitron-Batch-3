#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Accepted
    int n; cin >> n;
    vector <int> v(n);
    for(int i=n-1; i>=0; i--)
    {
        int x;
        cin >>x;
        v[i] = x;
    }

    for(int val:v)
    {
        cout <<val <<" ";
    }
    return 0;
}