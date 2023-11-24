#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",&a);
    int small_count=0;
    int capital =0;
    for(int i=0; i<strlen(a); i++){
        if(a[i]>='A' && a[i]<='Z' ){
            capital++;
        }
        else{
            small_count++;
        }
    }
    printf("%d %d ",capital,small_count);

    return 0;
}