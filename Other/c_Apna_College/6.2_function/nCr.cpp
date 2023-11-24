#include<bits/stdc++.h>
using namespace std;

int frac(int n)
{
    int fr = 1;
    for(int i=1; i<=n; i++)
    {
        fr *= i;
    }
    return fr;
}

int main()
{
    int n,r;
    cin >>n >>r;
    cout << frac(n)/(frac(r)*frac(n-r));
    return 0;
}