#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; getline(cin, s);
    for(auto a : s)
    {    if(a == '\\') break;
        
        cout << a ;
        
    }

    return 0;
}