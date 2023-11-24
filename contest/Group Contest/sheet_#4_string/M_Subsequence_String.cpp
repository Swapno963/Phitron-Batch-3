#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str; cin >> str;
    string need = "hello";
    int st = 0;
    for(auto a : str)
    {
        if(a == need[st]){
            st++;
            // cout << a << " ";
        }
    }
    // cout << st;
    if(st == 5) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}