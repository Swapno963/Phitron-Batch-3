#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count =0;
    int max = 0;
    while(n>0){
        if(n % 2 ==1){
            count+=1;
        }
         if(count > max){
            max = count;
        }
        else if(n %  2 ==0){
            count =0;
        }
        n /=2;
    }
    printf("%d",max);
    return 0;
}