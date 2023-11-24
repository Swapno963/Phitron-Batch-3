#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        if(i%2==0){
            printf("%D-Even\n",i);
        }
        else{
            printf("%D-Odd\n");
        }
    }
    return 0;
}