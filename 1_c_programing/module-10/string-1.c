#include<stdio.h>
int main()
{
    char a[5];

    // taking input
    for(int i=0; i<5; i++){
        scanf("%c",&a[i]);
    }

    // printing
    for(int i=0; i<5; i++){
        printf("%c\n",a[i]);
    }

    // see the size
    printf("%d\n", sizeof(a)/sizeof(char));
    return 0;
}