#include<stdio.h>
int main()
{
    int test_case;
    scanf("%d",&test_case);
    for (int i =0; i<test_case; i++){
        int n, sum;
        scanf("%d",&n);

        while(n != 0){
            printf("%d\n", n%10);
            

            n/=10;
        }
    }
    return 0;
}