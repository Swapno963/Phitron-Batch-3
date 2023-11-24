#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B ,&C);

    // findint the min and max
    int min, max;

    if(A>B)
    {
        if(A>C){
            max = A;
        }
        else{
            max = C;
        }
    }
    else{
        if(B>C)
        {
            max = B;
        }
        else{
            max = C;
        }
    }
    printf("%d",max);

    return 0;
}