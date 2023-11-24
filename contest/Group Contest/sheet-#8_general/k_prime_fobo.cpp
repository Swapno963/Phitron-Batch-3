#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[51] = {0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0};
    int t,a; cin >> t;
    while(t--){
        cin >> a;
        if(ar[a] == 0) cout << "not prime\n";
        else cout << "prime\n";
    }   
    return 0;   
}