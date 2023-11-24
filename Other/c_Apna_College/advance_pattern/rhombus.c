#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    // 
    for(int row=1; row<=n; row++){
        // for space
        for(int space=1; space<=n-row; space++){
            printf(" ");
        }

        // for stars
        for(int col=1; col<=n; col++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}