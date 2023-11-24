#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int x;
    cin >> x;
    cout << x << endl;

    // to ignore enter we can do
    //cin.ignore();
    // or
    getchar();

    //cin >> s; // it stop when it find space
    
    getline(cin,s); // it don't need to give size, it dynamically do it, At the same time it don't take enter as input like fgets()
    cout << s <<endl; 
    return 0;
}