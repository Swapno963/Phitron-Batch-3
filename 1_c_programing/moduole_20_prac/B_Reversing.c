#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int zero_count = 0;
    
    // taking input
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
        {
            zero_count++;
        }
    }
    // stroing zero index
    int zero_ind[zero_count];
    int tem_ind = 0;
       for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            zero_ind[tem_ind] = i;
            tem_ind++;
        }
    }

    // reverse the arr
    for(int i=0; i<zero_count; i++){
    // doing stuff
    int zero_index = zero_ind[i]-1;
    int tem_start = 0;
    while(tem_start<zero_index)
    {
        int tem = arr[tem_start];
        arr[tem_start] = arr[zero_index];
        arr[zero_index] = tem;
        //printf("tem_start%d  zero_index%d\n",arr[tem_start], arr[zero_index]);
        tem_start++;
        zero_index--;
    }
}

    // printing arr
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    //printf("%d",zero_ind[0]);
    return 0;
}