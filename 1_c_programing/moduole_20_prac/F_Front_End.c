#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int lst = n-1;
    int i=0;
   while(i<lst)
   {
        printf("%d ",arr[i]);
        printf("%d ",arr[lst]);
        i++;
        lst--;
   }
   if(i==lst)
   {
    printf("%d ",arr[i]);
   }
    return 0;
}