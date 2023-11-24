#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);

    int i=0;
    int j=strlen(s) -1;
    int a = 0;
    while (i<j)
    {
        if(s[i] == s[j]){
        a =1;
        }
        else{
            printf("NO");
            a =0;
            break;
        }
        
        i++;
        j--;
    }
     if(a==1){
         printf("YES");
     }
   // printf("%s",s);
    return 0;
}