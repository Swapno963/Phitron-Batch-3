#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int st1 = 0;
    int st2 = n-1;

    for(int row =0; row<n; row++)
    {
        for(int col =0; col<n;col++)
        {
         if(row == (n-1)/2 && col == (n-1)/2 )
        {
            printf("X");
        }
        else if(col == st1 )
         {
            printf("\\");
         }  
         else if( col == st2)
         {
            printf("/");
         }
         else
         {
            printf("*");
         }
        }
          st1++;
          st2--;
        printf("\n");
    }
    return 0;
}