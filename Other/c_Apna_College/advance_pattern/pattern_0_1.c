#include<stdio.h>
int main()
{
    int n;
     scanf("%d",&n);

     for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            if((row+col)%2 ==0){
                printf("%d ",1);
            }
            else{
                  printf("%d ",0);
            }
            //printf("*");
        }
        printf("\n");
     }
    return 0;
}