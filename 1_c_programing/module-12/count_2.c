#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    int voul_count=0;
    scanf("%s",&a);
    for(int i=0; i<strlen(a); i++){
       if(a[i] =='a' || a[i]=='e' ||a[i]=='i' || a[i]=='o' || a[i]=='u' ){
            voul_count++;
    }
   
}   
     printf("%d",voul_count);    
    return 0;
}