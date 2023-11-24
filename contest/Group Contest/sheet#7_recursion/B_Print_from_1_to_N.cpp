#include<bits/stdc++.h>
using namespace std;
void toN(int n){
    if(n==0) return;
    toN(n-1);
    cout << n << endl;
}
int main()
{
    int n; cin >> n;
    toN(n);
    return 0;
}