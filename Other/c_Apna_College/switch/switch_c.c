#include<stdio.h>
int main()
{
    int a=9 ;
    switch (a)
    {
    case 2:
        printf("two\n");
        break;
    
    case 4:
        printf("four\n");
        break;

    default:
        printf("I don't know\n");
        break;
    };
    return 0;
}