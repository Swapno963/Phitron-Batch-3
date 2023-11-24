#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];

    for(int row =0; row<n; row++)
    {
        for(int col =0; col<m; col++)
        {
            scanf("%d",&arr[row][col]);
        }
    }
    for(int row =0; row<n; row++)
    {
          for(int col =m-1; col>=0; col--)
        {
            printf("%d ",arr[row][col]);
        }
        printf("\n");
    }
    
    return 0;
}