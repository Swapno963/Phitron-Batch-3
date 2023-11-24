#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B ,&C);

    // findint the min and max
    int min, max;
// MINIUM
    if(A<=B && A<=C)
    {
        min = A;
    }
    else if(B<=A && B<=C){
        min =B;
    }
    else{
        min = C;
    }
    

    // max
     if(A>=B && A>=C)
    {
        max = A;
    }
    else if(B>=A && B>=C){
        max =B;
    }
    else{
        max = C;
    }
    printf("%d %d", min, max);
    return 0;
}