#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";

    // both gives first delemnt or 0 index value
    cout <<s[0] <<endl;
    cout << s.at(0)<< endl;
    cout << s.front() << endl;

    // Both gives last element
    cout << s.back() <<endl;
    cout << s[s.size()-1]<<endl;

    return 0;
}