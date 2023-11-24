#include<stdio.h>

// factrorial function
long long int fac(long long int n)
{
    if(n == 0) return 1;
    long long int ans = fac(n-1);
    return n*ans;
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int ans = fac(n);
    printf("%lld",ans);
    return 0;
}