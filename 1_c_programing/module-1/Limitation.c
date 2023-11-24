#include<stdio.h>
main()
{
    // int can't take more then 10^10
    int aa = 10000000000;
    printf("%d \n", aa);
    // long long int can't take more then 10^20
    long long int a = 100000000;
    printf("%lld", a);
    // float can't take 6 to 7 degit
    float f = 4.343 343;
    printf("%d",f);
    // double  can't take 15 degit 
    double dd = 4.3232323232323232;
    pirntf("%lf",dd);
    return 0;
}