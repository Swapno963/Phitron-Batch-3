#include<stdio.h>
int main()
{
    int test_case;
    scanf("%d",&test_case);
    for(int i=0; i<test_case; i++){
        int a,b;
        char c;
        scanf("%d%c%d",&a,&c,&b);
        printf("%d\n",a+b);
    }
    return 0;
}