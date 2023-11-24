#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int row=1; row<=n; row++){
        // space
        for(int space=1; space<=n-row; space++){
            printf(" ");
        }

        // printing num
        for(int num=1; num<=row; num++){
            printf("%d ",num);
        }
        printf("\n");
    }
    return 0;
}