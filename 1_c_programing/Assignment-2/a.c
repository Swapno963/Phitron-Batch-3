#include<stdio.h>
int main()
{   
    // int n,x,v;
    // scanf("%d",&n);
    // int arr[n];
    // //printf("%d", n);
    //  // initlizing arr
    // for(int i=0; i<n; i++){
    //     int element;
    //     scanf("%d",&element);
    //     arr[i] = element;
    // }
    // // changing x index to v

    // scanf("%d %d",&x, &v);
    // arr[x] = v;
    //  for(int i=n-1; i>=0; i--){
    //     printf("%d ",arr[i]);
    // }

     int n;
    scanf("%d",&n);
    int arr[n];
     
    //initlizing arr
    for(int i=0; i<n; i++){
        int element;
        scanf("%d",&element);
        arr[i] = element;
    }

    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }
    return 0;
}