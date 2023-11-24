#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int spc = n-1;
    for(int row =1; row<=n; row++){
        // space
        for(int sp=spc; sp>=1; sp--){
            printf(" ");
        }
        // print num
        for(int num=1; num<=row; num++){
            printf("%d",row);
        }
        printf("\n");
        spc--;
    }
    return 0;
}