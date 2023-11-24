#include<bits/stdc++.h>
using namespace std;
int main()
{
    float num; cin >> num;
    if(num >= 0 && num <= 100)
    {
        if(num <= 25) cout <<"Interval " <<'[' << 0<<','<<25 <<']' << endl;
        else if(num <= 50) cout <<"Interval " <<'(' << 25<<','<<50 <<']' << endl;
        else if(num <= 75) cout <<"Interval " <<'(' << 50<<','<<75 <<']' << endl;
        else if(num <= 100) cout <<"Interval " <<'(' << 75<<','<<100 <<']' << endl;
    }
    else cout <<"Out of Intervals\n";
    return 0;
}