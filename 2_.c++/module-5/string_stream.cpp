#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss;
    ss << s;
    string word;
    while(ss >> word)
    {
        cout << word << endl;
    }
    //cout << s << endl;
    return 0;
}