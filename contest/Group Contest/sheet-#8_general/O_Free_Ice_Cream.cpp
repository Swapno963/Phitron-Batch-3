#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, have;
    cin >> n >> have;
    long long  dis = 0;
    while(n--){
        char a; cin >> a;
        long long num; cin >> num;
        if(a == '+'){ // +
            have += num;
        }
        else { //-
            if(have >= num)
                have -= num;
            else dis++;
        }
    }
    cout << have <<" " << dis << endl;
    return 0;
}