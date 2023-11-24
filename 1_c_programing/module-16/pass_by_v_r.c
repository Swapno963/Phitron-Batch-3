#include<stdio.h>
void myfun(int *a, int b ){
    // changing number
    *a = 100;
     b = 100;
}
int main()
{
int n = 5;
int m = 5;
    myfun(&n,m);
    printf("n is %d\n",n);
    printf("m is %d\n",m);

    return 0;
}

/* */