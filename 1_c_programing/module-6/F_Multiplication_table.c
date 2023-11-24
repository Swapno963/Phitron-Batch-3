#include<stdio.h>
int main()
{
    int inp_num;
    scanf("%d",&inp_num);
    for(int i=1; i<=12; i++){
        printf("%d * %d = %d\n",inp_num, i, inp_num*i);
    }
    return 0;
}