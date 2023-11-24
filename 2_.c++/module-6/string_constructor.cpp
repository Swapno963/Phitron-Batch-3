#include<bits/stdc++.h>
using namespace std;
int main()
{
    // first way
    string s = "Hello World"; // normal initalizition
    cout << s << endl;

    // second way
    string s2("Hello world"); // new way of innitilization
    cout << s2 << endl;

    // Third way
    string s3("Hello World", 4); // it takes befor 4 index
    cout << s3 << endl;

    // fourth way
    string a = "Hello World";
    string s4(a,4); // it thakes from 4th index
    cout << s4 << endl;

    // fifth way
    string s5(26,'a'); // it gives 26 a to s5
    cout << s5 << endl;
    return 0;
}