#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; int res; char s,q;
    cin >> a>> s>> b>> q >> res;
    if(s=='+')
    {
       (a+b == res) ? cout <<"Yes": cout << a+b;
    }
    else if(s=='-')
    {
       (a-b == res) ? cout <<"Yes": cout << a-b;

    }
    else{
       (a*b == res) ? cout <<"Yes": cout << a*b;

    }
    
    return 0;
}