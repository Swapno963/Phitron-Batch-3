#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int first = n;
    while(first >= 10){
        first /=10;
    }

    //  even or odd
    if(first%2 ==0)
    {
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
   // printf("%d",first);
    return 0;
}