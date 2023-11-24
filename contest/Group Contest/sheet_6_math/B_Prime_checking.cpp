#include<bits/stdc++.h>
using namespace std;
bool is_prime(long long n){
    if(n>1){
        bool is_prime = true;
        int root = sqrt(n);
        for(int  i=2; i<= root; i++){
            if(n % i == 0){
                is_prime = false;
                break;
            }
        }
        return is_prime;
    }
    else return false;
}
int main()
{
    long long n; cin >> n;
    if(is_prime(n)) cout << "YES\n";
    else cout <<"NO\n";
    return 0;
}