#include<bits/stdc++.h>
using namespace std;
int dived_times(long long num){
    long long n = num;
    long long count = 0;
    if(num == 0) return 0;
    else if(num % 2 != 0) return 0;
    else{
        while(n %2 == 0){
            n /= 2;
            count++;
        }
    }
    return count;
}
int main()
{
    int t; cin >> t; 
    int mx = INT_MIN;

    while(t--)
    {
        long long num; cin >> num;
        long long res = dived_times(num);
        if(res > mx)
            mx = res;

    }
    cout << mx;

    return 0;
}