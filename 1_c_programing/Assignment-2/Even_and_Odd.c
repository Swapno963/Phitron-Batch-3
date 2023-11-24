#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum_of_even = 0;
    int sum_of_odd = 0;
    for(int i=0; i<n; i++){
        int element =0;
        scanf("%d",&element);
        if(element%2==0){
            sum_of_even+=element;
        }
        else
        {
             sum_of_odd+=element;
        }
        
    }
    printf("%d %d", sum_of_even,sum_of_odd);
    return 0;
}