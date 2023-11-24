#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    // taking input
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    // find hegest mark
    int higest_mark = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>higest_mark)
        {
            higest_mark = arr[i];
        }
    }

    // giving diffrence
    for(int i=0; i<n; i++){
        printf("%d ",higest_mark-arr[i]);
    }
    //printf("%d",higest_mark);
    return 0;
}