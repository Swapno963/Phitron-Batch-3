#include<bits/stdc++.h>
using namespace std;
bool is_power_of_two(long long n){
    if(n <= 0) return false; 
    double log2N = log2(n);
    return log2N == floor(log2N);
}
int main()
{
    long long n; cin >> n;
    if(is_power_of_two(n)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}