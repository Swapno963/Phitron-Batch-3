#include<stdio.h>
int main()
{
    // initlize int and lli and f and double
    int a;
    long long int b;
    float c;
    double d;

// int can't take more then 10^10
    a = 10000000000;
    printf("%d\n", a);

// long long int can handel +- 10^18
    b = 100000000000;
    printf("%lld",b);

    return 0;
}