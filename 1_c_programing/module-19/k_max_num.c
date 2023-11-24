#include<stdio.h>
#include<limits.h>
int fun(int n[], int s, int i)
{
    if(s==i) return INT_MIN;
    int max = fun(n,s,i+1);
    if(max<n[i])
    {
        return n[i];
    }
    else
    {
        return max;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        int element;
        scanf("%d",&element);
        arr[i] = element;
    }
    int result = fun(arr,n,0);
    printf("%d",result);
    return 0;
}