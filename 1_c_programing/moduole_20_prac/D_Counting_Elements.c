#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int count = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

      for(int i=0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(arr[i]+1 == arr[j]){
                count++;
                // printf("i=%d j=%d  \n",i,j);
               break;
            }

        }
    }
    printf("%d",count);
    return 0;
}