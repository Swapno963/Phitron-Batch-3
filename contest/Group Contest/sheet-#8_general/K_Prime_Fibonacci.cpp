#include<bits/stdc++.h>
using namespace std;
long long ar[52];
bool is_prime(long long n) {
    long long root = sqrt(n);
    for (long long i = 2; i <= root; i++) {
        if (n % i == 0) {
            return true;
        }
    }
    return false;
}
void fibo(){
  
    ar[0] =1;
    ar[1] =1;
    for(int i=1; i<=50; i++){
        ar[i+1] = ar[i] + ar[i-1];
    }
//   for(int i=0; i<=50; i++){
//        cout <<  ar[i] << " ";
//     }

    for(int i=1; i<=50; i++){
       
        ar[i+1] = is_prime(ar[i+1]);
    }

    ar[0] = 0; ar[1] =0;
    // for(int i=0; i<=50; i++){
    //    cout <<  ar[i] << " ";
    // }
    
}


int main()
{
    int t; cin >> t;
       fibo();
    while(t--){
        int n; cin >> n;
        if(ar[n] == 1) cout << "prime\n";
        else cout << "not prime\n";
    }

     
    //    for(int i=0; i<=50; i++){
    //    cout <<  ar[i] << " ";
    // }
    // cout <<is_prime(144);
    return 0;
}