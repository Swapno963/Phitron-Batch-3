#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n+1];
    // taking arr input
    for(int i=0; i<n; i++ ){
        scanf("%d",&arr[i]);
    }

    //  taking position index and value
    int pos_ind,val;
    scanf("%d %d",&pos_ind,&val);
    for(int i=n; i>=pos_ind+1; i--){
        arr[i] = arr[i-1];
    }
    arr[pos_ind] = val;
 
    // printing arr
    for(int i=0; i<=n; i++){
        printf("%d\n",arr[i]);
    }


    return 0;
}