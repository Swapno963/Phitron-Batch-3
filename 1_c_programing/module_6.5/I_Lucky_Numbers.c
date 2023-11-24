#include<stdio.h>
int main()
{
    int inp_value;
    scanf("%d",&inp_value);
    int a  ,b;
    a = inp_value % 10;
    b = inp_value /10;
    if(a%b ==0 || b%a==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}