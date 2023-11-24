#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q; cin >> n >> q;
    long long ar[n];

    for(int i=0; i<n; i++)
        cin >> ar[i];


    while(q--)
    {
        int x; cin >> x;
        bool flag = false;
        for(int i=0; i<n; i++)
            if(ar[i] == x)  flag = true;
        
        if(flag) cout << "found\n";
        else cout <<"not found\n";
    }
    return 0;
}