#include<stdio.h>
int count_before_zero(int n,int arr[]) {
    int count = 0;
  for(int i=0; i<n; i++){
    if(arr[i] != 0){
        count++;
    }
    else
    {
        break;
    }
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        int num;
        scanf("%d",&num);
        arr[i] = num;
    }
    
    printf("%d",count_before_zero(n,arr));
    return 0;
}