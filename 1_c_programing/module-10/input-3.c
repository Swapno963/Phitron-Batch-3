#include<stdio.h>
int main()
{
    char a[5];
    scanf("%s",a); // stop taking input when it found space

    char b[5] = "aallsskk"; //if we take more then char compare to our declare then it will give rutime error or segment error
    printf("%s",a);
    return 0;
}