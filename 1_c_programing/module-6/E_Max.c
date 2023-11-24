#include<stdio.h>
int main()
{
    int times,inp_num,max_value = 0;
    // printf("%d %d", times, max_value);
    scanf("%d",&times);
    for(int i=0; i<times; i++){
        
        scanf("%d",&inp_num);
        if(inp_num>max_value){
            max_value = inp_num;
        }
    }
    printf("%d", max_value);
    return 0;
}