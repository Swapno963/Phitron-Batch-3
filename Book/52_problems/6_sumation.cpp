#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "12238";
    cout << s[0]-'0'+s[s.length()-1]-'0';
    return 0;
}