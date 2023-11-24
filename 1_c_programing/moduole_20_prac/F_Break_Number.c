#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int arr[n];
    long long int devide_count_ar[n];
    long long int devide_count =0;

    // taking input
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        long long int devident = arr[i];
        while(devident%2 ==0)
        {
            devide_count++;
            devident/=2;
        }
        devide_count_ar[i] = devide_count;
        devide_count = 0;
    }
    long long int max = devide_count_ar[0];
    // finding max
   for(int i=0; i<n; i++)
    {
        if(devide_count_ar[i]>max)
        {
            max = devide_count_ar[i];
        }
    }
            printf("%lld\n",max);

    return 0;
}