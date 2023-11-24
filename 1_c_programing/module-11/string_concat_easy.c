#include<stdio.h>
#include<string.h>
int main()
{
    char a[20], b[20];
    scanf("%s %s", a,b);
    // solving problem in one line
    // strcat(a,b);

//     copy first 3 char of b
int j = strlen(a);
for(int i=0; i<=2; i++){
    a[j] = b[i];
    j++;
}
a[j] = '\0';

    printf("%s %s",a,b);
    return 0;
}