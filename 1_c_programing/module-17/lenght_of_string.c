#include<stdio.h>
int fun(char a[],int i)
{
    // base case
    if(a[i] == '\0') return 0;

    int l = fun(a, i+1);
    return l+1;
}
int main()
{
    char sen[3] = "hi";
    int len_of_str = fun(sen,0);
    printf("%d",len_of_str);
    return 0;
}