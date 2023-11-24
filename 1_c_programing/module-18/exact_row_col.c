#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int ar[row][col];
     //  taking input
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }

    // int exc_row;
    // scanf("%d",&exc_row);
    //  // giving output
    // for(int i=0; i<col; i++)
    // {
    //     printf("%d ",ar[exc_row][i]);
    // }

     int exc_col;
    scanf("%d",&exc_col);
     // giving output
    for(int i=0; i<row; i++)
    {
        printf("%d ",ar[i][exc_col]);
    }
    return 0;
}