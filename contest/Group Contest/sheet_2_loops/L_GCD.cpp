#include<bits/stdc++.h>
using namespace std;
int get_gcd(int a, int b)
{
    while(b)
    {
        a = a % b;
        swap(a,b);
    }
    return a;
}
int main()
{
    int a,b; cin >> a >> b;
    cout << get_gcd(a,b) << endl;
    return 0;
}