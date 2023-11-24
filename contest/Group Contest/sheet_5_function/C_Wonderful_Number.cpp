#include<bits/stdc++.h>
using namespace std;

string toBinary(int num) {
    string binaryStr = "";
    while (num > 0) {
        int bit = num % 2;
        binaryStr = to_string(bit) + binaryStr;
        num /= 2;
    }
    return binaryStr;
}

string solve(int n)
{
 string n_binary = toBinary(n); // making n to binary representatkon
 int n_len = n_binary.length();
 for(int i=0; i<n_len/2; i++)
 {
    if(n_binary[i] != n_binary[n_len-1-i])
        return "NO\n";
 }

 return "YES\n";
}

int main()
{
    long long n; cin >> n;
    if(n % 2 != 0) 
        cout << solve(n);
    else cout << "NO\n";

    return 0;
}