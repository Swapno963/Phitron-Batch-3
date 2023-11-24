#include<stdio.h>
int main()
{
    // take 10% and 20% and store everything in a variable
    int a;
    int b;
    char c;

    scanf("%d %c %d %c",&a,&c,&b,&c);
    printf("%d%c %d%c\n",a,c,b,c);


    // take input but don't wanna store in any where
    int d;
    int e;
    scanf("%d%% %d%%",&d,&e);
    printf("%d%% %d%%",d,e);
    return 0;
}