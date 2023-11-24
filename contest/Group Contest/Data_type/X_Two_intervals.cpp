#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l1,l2,r1,r2;
    cin >> l1 >> r1 >> l2 >> r2;

    long long l,r;
    if(l1 <= l2)
    {
        l = l2;
        if(r1 <= r2) r = r1;
        else r = r2;
    }
    else if( l1 >= l2)
    {
        l = l1 ;
        if(r1 <= r2) r = r1;
        else r =  r2;
    }    
    if(l > r) cout << -1;
    else cout << l <<" "<< r;


    return 0;
}