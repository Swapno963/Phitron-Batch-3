#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    // if i need index and element
    for(int i =0; i<s.size(); i++)
    {
        cout << s[i] << endl;
    }

    // Only charter is require, Don't want index
    for(char c:s)
    {
        cout <<c <<endl;
    }
    return 0;
}