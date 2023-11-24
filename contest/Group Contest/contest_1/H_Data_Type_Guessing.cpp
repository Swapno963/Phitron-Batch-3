#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,a;
    cin >> n >> k >> a;
    long long result = n * k * a;
        if (-2147483648LL <= result && result <= 2147483647LL) {
        cout << "int" << endl;
    } else if (-9223372036854775808LL <= result && result <= 9223372036854775807LL) {
        cout << "long long" << endl;
    } else {
        cout << "double" <<endl;
    } 
    return 0;
}