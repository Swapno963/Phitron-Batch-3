#include<stdio.h>
int main()
{
    int n;
    int sum =0;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);

    for(int i=0; i<n; i++){
        sum+=a[i]-48;
    }
    printf("%d\n",sum);
    
    return 0;
}