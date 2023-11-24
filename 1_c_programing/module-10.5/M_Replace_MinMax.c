#include<stdio.h>
int main()
{
    int n, min,max;
    int min_index = 0, max_index=0;
    scanf("%d",&n);

    // initializing arr as input and finding min and max
    int arr[n];
    for(int i=0; i<n; i++){
        int element;
        scanf("%d",&element);
        arr[i] = element;
        if(i==0){
            min = element;
            max = element;
        }
        else{
            if(min>element){
                min = element;
                min_index =i;            
                }
           if(max<element){
                max=element;
                max_index=i;
           }
        }
    }


    // finding min and max
    //int min,max;
   // for(int i=0; i<)

    // replacing min with max
    arr[min_index]=max;
    arr[max_index]=min;
    // printing the arr
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    
   // printf("%d %d",min_index, max_index);
    return 0;
}