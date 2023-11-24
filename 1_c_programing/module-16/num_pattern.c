#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int spc = n-1;
    int numbr = 1;
    int row_cout = n*2;
    for (int row =1; row < row_cout; row ++){
       for(int sp =1; sp<=spc; sp++){
        printf(" ");
       }
       for(int num = 1; num<=numbr; num++){
        printf("%d",num);
       }
       printf("\n");
       if(row<5){
        spc--;
        numbr+=2;
       }
       else{
        spc++;
        numbr-=2;
       }
    }
    return 0;
}