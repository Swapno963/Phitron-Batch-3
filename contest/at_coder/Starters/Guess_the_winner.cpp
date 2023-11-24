#include<bits/stdc++.h>
using namespace std;
bool is_prime(long long n){
    int rt = sqrt(n+1);
    bool flg = true;
    for(int i=2; i<rt; i++){
        if(n%i == 0){
            flg = false;
            return flg;
        }
    }
    return flg;
}
int main()
{
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        if(n %2 != 0 && is_prime(n)){
            cout << "Alice\n";
        }
        else cout << "Bob\n" ;
    }
    return 0;
}