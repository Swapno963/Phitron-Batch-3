#include<stdio.h>
#include<string.h>
int main()
{ 
    char a[100];
    scanf("%s",a);
    int cmt[26] = {0};
    for(int i=0; i<strlen(a); i++){
        int val = a[i] -'a';
        //printf("%c ",val+97);

        cmt[val]++;
    }
    //
    // printf("%d\n",cmt[0]);
    for(int i=0; i<26; i++)
    {
        printf("%c ace %d br\n",i+'a',cmt[i]);
    }
    return 0;
}