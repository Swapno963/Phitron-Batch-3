#include<stdio.h>
#include<string.h>
int main()
{
    int count[26] = {0};
    char b[1000001];
    scanf("%s",b);
   // printf("%s",b);
    for(int i=0; i<strlen(b);i++){
        int val = b[i] -'a';
        count[val]++;
    }
    for(int i=0; i<26;i++){
        if(count[i]!=0){
            printf("%c : %d\n",i+'a',count[i]);
        }
    }
    

    return 0;
}