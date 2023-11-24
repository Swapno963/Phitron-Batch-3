#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    string s ;cin >> s;
    for(auto a : s)
        if(a !='+') {
            int x = a-'0';
            v.push_back(x);
        }

    sort(v.begin(),v.end());
    for(int i=0; i<v.size()-1; i++)
        cout << v[i] << "+";
    cout << v[v.size()-1];
    return 0;
}