#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a, &b);
    int count[100000] ={0};
    for(int i=0; i<a; i++){
        int element;
        scanf("%d",&element);
        count[element]++;
    }

    for(int i=1; i<=b; i++){
        printf("%d\n",count[i]);
    }

    return 0;
}