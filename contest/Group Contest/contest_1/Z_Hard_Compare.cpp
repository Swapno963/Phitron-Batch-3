#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    // if(b>d) cout<< "YES";
    // else if(b ==d && a>c) cout <<"YES";
    // else cout << "NO";
    if(a==c && b==d) cout << "NO";
    else if(pow(a,b)>pow(c,d)) cout << "YES";
    else cout << "NO";
    return 0;
}