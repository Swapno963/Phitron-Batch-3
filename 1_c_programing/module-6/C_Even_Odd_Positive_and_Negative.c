#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int even ,odd, positive, negative = 0;
        for(int i = 0; i<n; i++){
            int inp_num ;
            scanf("%d",&inp_num);
            //printf("%d\n",inp_num);

            if(inp_num%2==0){
                even++;
            }
            else{
                odd++;
            }
             if(inp_num>0){
                positive++;
            }
            else if(inp_num <0){
                negative++;
            }

    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd, positive, negative);

    return 0;
}