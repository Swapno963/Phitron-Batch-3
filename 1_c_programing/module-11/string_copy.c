#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s",a,b);

// manually
/*
    for(int i=0; i<=strlen(b); i++){
        a[i] = b[i];
    }
*/

// using function
strcpy(a,b);
    // printing those
    printf("%s %s",a,b);
    return 0;
}