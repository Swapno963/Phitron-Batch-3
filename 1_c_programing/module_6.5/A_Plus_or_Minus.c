#include<stdio.h>
int main()
{
    int test_case;
    scanf("%d",&test_case);
    for(int i =0; i<test_case; i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a+b == c){
            printf("+\n");
        }
        else{
            printf("-\n");
        }
    }
    return 0;
}