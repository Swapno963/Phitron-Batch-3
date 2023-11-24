#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "Hello world";
    //cout << s.size() << endl; // give the size, It not include /0

    //cout << s.max_size() << endl; // return the maximum size it can hold.  But online complier give 10^6

    // to make string empty or clear 
    // s.clear();
    // cout << s.size() << endl;

    // to check is it empty or not
    // cout << s.empty() << endl; // 1 means yes

    string s = "Hello World";
    s.resize(5); // it delet after 5 element or 4 index,
    s.resize(8); // it will give null, after 5

    // if we don't want null and want to something else
    s.resize(10,'s'); // instedo null it give s
    cout<< s<<endl;

    return 0;
}