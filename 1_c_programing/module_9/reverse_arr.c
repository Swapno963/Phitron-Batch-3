#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    // taking array input
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    // reversing arr
    int i=0, j=n-1;
    while(i<j){
        int tem = arr[i];
        arr[i] =arr[j];
        arr[j] = tem;
        i++;
        j--;
    }
    
    // printing arr
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}