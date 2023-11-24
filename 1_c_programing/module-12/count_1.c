#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int even_count =0;
    int odd_count=0;
    for(int i=0; i<n; i++){
        int element;
        scanf("%d",&element);
        // no logical part
        if(element%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
     printf("%d %d",even_count,odd_count);
    return 0;
}