#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    long long sum = 0;
    for(char a : s)
        sum += a -'0';

    cout << sum << endl;
    return 0;
}