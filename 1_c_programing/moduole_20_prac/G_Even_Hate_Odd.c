#include<stdio.h>
int main()
{
    int test_case;
    scanf("%d",&test_case);
    for(int i=0; i<test_case; i++)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        int even =0; 
        int odd =0;
        // taking input
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
            if(arr[i]%2==0)
            {
                even++;
            }
            else{
                odd++;
            }
        }
     if(n%2!=0) {
            printf("-1\n");
          
        }
     else if(even==odd)
        {
            printf("0\n");
           
        }
    else
    {
        if(even>odd){
            printf("%d\n",even -(n/2));
        }
        else{
              printf("%d\n",odd -(n/2));
        }
    }
        // operation
       
    }
    return 0;
}