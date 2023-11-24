#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    int num_of_ser;
    int count =0;
    scanf("%d",&num_of_ser);
    for(int i=0; i<n; i++){
        if(arr[i] ==num_of_ser){
            count++;
        }
    }
             printf("%d ",count);

    return 0;
}