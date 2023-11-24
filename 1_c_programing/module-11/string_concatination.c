#include<stdio.h>
#include<string.h>
int main()
{
    char a[20], b[20];
    scanf("%s %s", a,b);
    int j = strlen(a);
    for(int i=0; i<= strlen(b); i++){
        a[j] = b[i];
        j++;
    }
    int  null_index = strlen(a) + strlen(b)-1;
    a[null_index] = '\0';
    printf("%s", a);

    return 0;
}