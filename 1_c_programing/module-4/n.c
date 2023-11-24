#include <stdio.h>
#include <ctype.h>
int main()
{
    char x;
    scanf("%c",&x);


    if(x>64 && x<91)
    {
        char result = tolower(x);
        printf("%c",result);
    }
    else{
        char result = toupper(x);
        printf("%c",result);
    }
    return 0;
}