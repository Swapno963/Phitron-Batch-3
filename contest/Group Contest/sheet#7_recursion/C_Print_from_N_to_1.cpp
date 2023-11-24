#include<bits/stdc++.h>
using namespace std;
void to1(int n){
    if(n == 1 ) return;
    cout << n << " ";
    to1(n-1);
}


int main()
{
    int n; cin >> n;
    to1(n);
    cout << 1;
    return 0;
}