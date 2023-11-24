#include<stdio.h>
int main()
{
    int test_case;
    scanf("%d",&test_case);

    for(int i =0; i<test_case; i++)
    {
        long long int start, end;
        long long int sum = 0;
        scanf("%lld %lld",&start,&end);
        for(long long int i= start; i<=end; i++)
        {
            sum+=i;
        }
        printf("%lld\n",sum);
    }
    return 0;
}