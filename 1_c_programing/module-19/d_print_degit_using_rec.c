#include<stdio.h>
void fun(int n){
    if(n==0) return;
    int remainder = n % 10;
    int result = n /10;
   fun(result);
    printf(" %d ",remainder);
}
int main()
{
    int test_case;
    scanf("%d",&test_case);
    for(int i=0; i<test_case; i++)
    {
        int n;
        scanf("%d",&n);
        fun(n);
        if( n==0)
        {
            printf(" 0");
        }
        printf("\n");
    }
    return 0;
}