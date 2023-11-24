#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d", &row, &col);
    int arr[row][col];

    // taking 2 d matrik input
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int cmt =0 ;
    int element = row * col;
     for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++){
            if(arr[i][j] == 0){
                cmt++;
            }
        }
    }

    if(element == cmt){
        printf("This is zero metrix\n");
    }
    else{
        printf("This is not zero metrix\n");

    }
    return 0;
}