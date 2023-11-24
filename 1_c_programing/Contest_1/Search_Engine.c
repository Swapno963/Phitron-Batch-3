#include<stdio.h>
int main()
{
    int test_case;
    scanf("%d",&test_case);

    for(int ts=1; ts<=test_case; ts++)
    {
        // array size input
        int n;
        scanf("%d",&n);

        // array element input
        int arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }

        // printing position
        int num_to_sear;
        int is_found =0;

        scanf("%d",&num_to_sear);
        for(int i=0; i<n; i++)
        {
            if(num_to_sear == arr[i])
            {
                printf("Case %d: %d\n",ts,i+1);
                is_found =1;
                break;
            }
        }
        if(is_found ==0)
        {
            printf("Case %d: Not Found\n",ts);

        }


    }
    return 0;
}