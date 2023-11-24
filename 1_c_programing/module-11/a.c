#include<stdio.h>
int main()
{
    char str1[] = "hello";
    char str2[6];
    int i;
    for(i=0; str1[i]!='\0'; i++)
    {
        str2[i] = str1[i];
    }
    printf("%s", str2);
    return 0;
}