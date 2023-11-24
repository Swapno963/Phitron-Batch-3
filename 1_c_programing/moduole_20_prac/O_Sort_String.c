#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n+1];
    scanf("%s",&a);

    for(int i=0; i<n ;i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i] < a[j]){
                char x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
        //printf("%d\n",a[i]);
    }
     for(int i=0; i<n ;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}