#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

    // working with word
    for(int i=0; i<n; i++){
        char s[101];
        scanf("%s",s);
        int ln_s = strlen(s);
        if(ln_s<=10){
             printf("%s\n",s);
        }
        else{
            printf("%c%d%c\n",s[0],ln_s-2,s[ln_s-1]);
        } 
    }
    return 0;
}