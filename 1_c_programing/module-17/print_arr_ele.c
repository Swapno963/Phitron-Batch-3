#include<stdio.h>
void fun(int siz, int arr[], int ind)
{   
    if(siz == ind) return;
    printf("%d\n",arr[ind]);
    fun(siz,arr, ind+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    fun(n,arr,0);
    //  for(int i=0; i<n; i++){
    //     printf("%d",arr[i]);
    // }
    return 0;
}