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

        // number left
        for(int num=row; num>=1; num--){
            printf("%d", num);
        }

        // number right
        for(int num_2=2; num_2<=row; num_2++){
            printf("%d",num_2);
        }
        printf("\n");

    }
    return 0;
}