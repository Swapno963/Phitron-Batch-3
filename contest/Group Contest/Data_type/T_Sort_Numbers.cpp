#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[3],ar2[3];
    for(int i=0; i<3; i++)
        cin >> ar[i];

    copy(ar,ar+3,ar2); // copyt to ar2

    // sort the firs one 
    sort(ar, ar+3);

    for(auto a:ar) cout << a << endl;
    cout << endl;
    for(auto a:ar2) cout << a << endl;


    
    return 0;
}