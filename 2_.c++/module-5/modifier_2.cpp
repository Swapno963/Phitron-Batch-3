#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello world";
    //s.replace(4,2,"XX"); // delete 4 th and 5th index


    //s.replace(4,0,"XX"); // don't delete any element just insert xx in 4th inex

    s.insert(2,"ds"); // just insert someting in 2 index
    cout << s << endl;
    return 0;
}