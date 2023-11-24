#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n, &m);

    int arr[n][m];
    //  taknig input
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //  giving output
    int res =0;
    for(int i=0; i<=n-3; i++){
        int sum = 0;
        for(int j=0; j<=m-3; j++){
            sum = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            // printf("%d %d %d\n",arr[i][j],arr[i][j+1],arr[i][j+2]);
            // printf("%d \n",arr[i+1][j+1]);
            // printf("%d %d %d\n",arr[i+2][j],arr[i+2][j+1],arr[i+2][j+2]);
            if( sum > res){
            res = sum;
        }
            printf("\n");
        }
        
        
    }
    printf("%d",res);
    return 0;
}