#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[100001];
   fgets(s,100001,stdin);
   for(int i=0; i<strlen(s); i++){
    if(s[i] ==','){
        s[i] = ' ';
    }
    if(s[i]>='A' && s[i]<='Z'){
       s[i] = tolower(s[i]);
    }
    else{
        s[i] = toupper(s[i]);
    }
   }
   printf("%s",s);
    return 0;
}