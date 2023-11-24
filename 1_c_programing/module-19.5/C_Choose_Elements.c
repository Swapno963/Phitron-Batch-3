#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n, &k);
    long long int arr[n];
    // taking input 
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }

   for(int i=0; i<n; i++)
   {
    for(int j=0; j<n; j++)
    {
        if(arr[i]>arr[j])
        {
            long long int tem = arr[i];
            arr[i]  = arr[j];
            arr[j] = tem;
         }
    }
   }

   long long int sum =0;
    for(int i=0; i<k; i++)
    {
        if(arr[i]>0)
        {
            
       sum += arr[i];
        }
    }
    printf("%lld",sum);
    return 0;
}