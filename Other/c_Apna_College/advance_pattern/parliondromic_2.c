#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        int j;
        // space
        for(j=1; j<=n-i; j++){
            printf(" ");
        }

        // number left
        int k=i;
        for(; j<=n; j++){
            printf("%d ",k--);
        }

        // num right
        for(; j<=n+i-1; j++){
            printf("%d ",k++);
        }

        printf("\n");
    }
    return 0;
}