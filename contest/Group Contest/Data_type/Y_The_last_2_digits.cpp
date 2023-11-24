#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    // int res = (a*b*c*d) % 100;
    cout << fixed << setprecision(2);
    cout <<(a*b*c*d) % 100 << endl;
    
    
    return 0;
}