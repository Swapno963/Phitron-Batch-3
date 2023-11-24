#include<bits/stdc++.h>
using namespace std;
int main()
{
    double num; cin >> num;
    int nm = num;
    if(num == nm) cout << "int "<< nm << endl;
    else cout << "float "<< nm << " "<< num - nm;
    //cout << static_cast<int>(num)<< endl;
    return 0;
}