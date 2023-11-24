#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x; cin >> a >> b >>x;
    long long sum = 0;
    for(int i=a; i<=b; i+=x)
        sum += i;

    cout << sum << endl;
            
    
    return 0;
}