#include<stdio.h>
int main()
{
   // char a[5] = "swapn"; // this will give ulta palta value at the end unitill it gate \0
    
    // proper way for it is
    char a[6] = "swapn"; // Just need to incrise size by one
    printf("%s",a);
    
    return 0;
}