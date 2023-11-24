#include<stdio.h>
int main()
{
    // taking n arr
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    // taknig m arr
     int m;
    scanf("%d", &m);
    int b[m];
    for(int i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }

    // copy arr from n
    int ans[n+m];
    for(int i=0; i<n; i++){
        ans[i] = a[i];
    }

    // copy from m
    int i = n;
    for(int j = 0; j<m; j++){
        ans[i] = b[j];
        i++;
    }

    // printing arr
    for(int i=0; i<n+m; i++)
    {
        printf("%d ",ans[i]);
    }
    return 0;
}