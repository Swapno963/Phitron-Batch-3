#include<stdio.h>
#include<string.h>
int main()
{
    char c1[11];
    char c2[11];

    scanf("%s",c1);
    scanf("%s",c2);
    // pri
    printf("%d %d\n", strlen(c1), strlen(c2));
    printf("%s%s\n",c1,c2);
    char c1_f = c1[0];
    char c2_f = c2[0];
    c2[0] = c1_f;
    c1[0] = c2_f;
      printf("%s %s\n",c1,c2);
    return 0;
}