#include<bits/stdc++.h>
using namespace std;
void is_prime(long long num){
    if(num == 1) {
        cout << "NO\n";
        return;
    }
    if( num == 2) {
        cout << "YES\n";
        return;
    }

    for(int i=2; i<=sqrt(num); i++)
    {
        if(num % i ==0){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main()
{
    int t; cin >> t;
    while(t--){
    long long num; cin >> num;
    is_prime(num);
    }
    return 0;
}