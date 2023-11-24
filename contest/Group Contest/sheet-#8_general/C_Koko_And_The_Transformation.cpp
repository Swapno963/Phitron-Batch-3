#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; cin >> n >> m;
    long long sum = 0;
    for(int i=0; i<n; i++) 
    {
        int x;
        cin >> x; sum +=x;
    }

    for(int i=0; i<m; i++) 
    {
        int x;
        cin >> x; sum -=x;
    }
    if(sum == 0) cout << "Yes\n";
    else cout << "No\n";


    return 0;
}