#include<stdio.h>
int main()
{
    // taking input
    int n;
    scanf("%d",&n);

    //printing pattern
    if(n==1)
    {
        printf("#");
    }
    else
    {
        int hash_ind = (n+1)/2;
        for(int row =0; row<n; row++)
        {
            for(int col=0; col<n; col++)
            {
                if(row == hash_ind-1 || col == hash_ind-1)
                {
                    printf("#");
                }
                else
                {
                    printf("*");
                }
            }
            printf("\n");
        }
    }
    return 0;
}