#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    
    while(t--)
    {
        long long a,b; cin >> a >> b;
        long long st = min(a,b);
        long long en = max(a,b);


        long long s1 = (st*(st+1)/2);
        long long s2 = (en*(en+1)/2);
        cout << (s2 - s1)+st << endl;
    }
   
    return 0;
}