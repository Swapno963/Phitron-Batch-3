#include<stdio.h>
#include<string.h>
char is_palindrome(char s[]){
    int i = 0;
    int j = strlen(s) -1;
    while(i<j){
        if(s[i] != s[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main()
{
    if(is_palindrome("madam") == 1){
        printf("Palindrome");
    }
    else{
      printf("Not Palindrome");

    }
    return 0;
}