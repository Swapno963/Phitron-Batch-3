#include<stdio.h>
int main()
{
    int i=0;
//      0    1-1    1     1
    i = i++ - --i + ++i - i--;
    printf("%d",i);
    return 0;
}