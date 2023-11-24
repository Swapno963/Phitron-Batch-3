#include<stdio.h>
int main()
{
    int n=45;
    int a[50],i,r;
    for(i=0; n!=0; i++){
        a[i]=r%2;
        n/=2;
    }

for(int i=0; i<sizeof(a)/sizeof(int); i++){
    printf("%d\n",a[i]);
}
    // printf("%d",sizeof(a)/sizeof(int));
    return 0;
}