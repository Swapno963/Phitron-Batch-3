#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        int element;
        scanf("%d",&element);
        arr[i] = element;
    }
    for(int i=n-1; i>=0; i--){
        if(i%2==0){
            printf("%d ",arr[i]);
        }
       
    }
   
    return 0;
}