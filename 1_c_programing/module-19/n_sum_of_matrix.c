#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int arr_1[row][col];
    int arr_2[row][col];

// for arr one
    for(int i= 0 ; i<row; i ++)
    {
        for(int j = 0; j<col; j++)
        {
            scanf("%d",&arr_1[i][j]);
        }
    }

    // for arr one
    for(int i= 0 ; i<row; i ++)
    {
        for(int j = 0; j<col; j++)
        {
            scanf("%d",&arr_2[i][j]);
        }
    }

    // print
    // for arr one
    for(int i= 0 ; i<row; i ++)
    {
        for(int j = 0; j<col; j++)
        {
            printf("%d ",arr_1[i][j]+arr_2[i][j]);
        }
        printf("\n");
    }
    return 0;
}