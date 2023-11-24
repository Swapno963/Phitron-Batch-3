#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d; cin >> a >> b >> c >> d;
    
    if(pow(a,b) == pow(c,d)) cout << "NO\n";
    else if(pow(a,b) > pow(c,d)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}