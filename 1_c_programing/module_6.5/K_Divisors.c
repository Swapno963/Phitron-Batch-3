#include<stdio.h>

int main()
{
    int in_value;
    scanf("%d",&in_value);
   for(int i=1; i<=in_value; i++){
    if(in_value%i ==0){
        printf("%d\n",i);
    }
   }
    return 0;
}