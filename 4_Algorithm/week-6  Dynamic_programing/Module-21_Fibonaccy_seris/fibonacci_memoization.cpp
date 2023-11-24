#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
long long save[N];
long long fibo(int n)
{
    // base case
    if(n == 0 || n == 1) return 1;

    // memoization
    if(save[n] != -1)  
    {
        return save[n];
    }

    long long ans1 = fibo(n-1);
    long long ans2 = fibo(n-2);
    save[n] = ans1 + ans2;
    return save[n];
}
int main()
{
    int n; cin >> n;
    for(int i=0; i<=n; i++)
    {
        save[i] = -1;
    }

    cout << fibo(n) << endl;
    return 0;
}