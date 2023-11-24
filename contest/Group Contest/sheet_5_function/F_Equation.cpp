#include<bits/stdc++.h>
using namespace std;

long long power_it(int a, int b){
    long long res = 1;
    for(int i=1; i<=b; i++)
    {
        res *= a;
    }
    return res;
}

long long get_sum(int x,int n){
    long long sum = 0;
    for(int i=2; i<=n; i+=2){
        sum += power_it(x,i); // first num, second power
        // cout << i << " ";
    }
    return sum;

}
int main()
{
    int x,n; cin >> x >> n;
    cout <<  get_sum(x,n);
    return 0;
}