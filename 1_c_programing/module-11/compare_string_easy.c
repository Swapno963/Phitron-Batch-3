#include<stdio.h>
#include<string.h>
int main()
{
     char a[100], b[100];
    scanf("%s %s",a,b);
    int v = strcmp(a,b);
    // -1 means first one small
    // 0 means both are same
    // 1 means first one is big

    printf("%d", v);
    return 0;
}