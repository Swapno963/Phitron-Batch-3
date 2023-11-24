#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a,b; cin >> a >> b;
        int st = min(a,b);
        int ed = max(a,b);
        long long sum =0;
        for(int i=st+1; i<ed; i++)
        {
            if(i%2 != 0) sum += i;
        }
        cout << sum<< endl;
    }
    return 0;
}