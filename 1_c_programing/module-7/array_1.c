#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }

// printing array
    for(int i=0; i<5; i++){
        printf("%d\n",arr[i]);
    }

// reverse array
for(int i=4; i>=0; i++){
    printf("%d\n",arr[i]);
}
    return 0;
}