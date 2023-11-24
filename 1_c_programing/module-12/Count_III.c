#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",&a);

    // counting
    int count[26] ={0};
    for(int i=0; i<strlen(a); i++){
        int val = a[i] - 'a';
        count[val]++;
    }

    // showing result
    for(int i='a'; i<='z'; i++){
        printf("%c - %d\n",i,count[i-'a']);
    }
    return 0;
}