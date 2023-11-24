#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num; cin >> num;
    // long long y = (num +1)/4;
    // long long x = num /4;
    // cout << y << " " << x << endl;
    cout << num /4<< " " << (num %4)+1 << endl;
    return 0;
}