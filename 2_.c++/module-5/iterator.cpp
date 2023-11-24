#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // way 1
    //string ::iterator it;
    cin >> s;

// way 1
/*
    for(it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
*/

// way 2
/*
   for(string :: iterator it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
*/

// way 3 ( it only work in 11++ copiler)
for(auto it=s.begin(); it<s.end(); it ++)
{
    cout << *it << endl;
}
    return 0;
}