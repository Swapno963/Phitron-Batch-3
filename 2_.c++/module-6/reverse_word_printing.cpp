#include<bits/stdc++.h>
using namespace std;
void print(stringstream & ss)
{
    string word;
    if(ss >> word)
    {
        print(ss);
        cout << word << endl;
    }
}
int main()
{
    string s;
    getline(cin,s);

    stringstream ss;
    ss << s;
    // pring world one by one. But it can't be reversed
    /*
    string word;
    while(ss >> word)
    {
        cout << word << endl;
    }
    */

//    to make it work reverse
    print(ss);
    //cout << s << endl;
    return 0;
}