#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);

    if(x >= '0' && x <= '9'){ //number 
      printf("IS DIGIT\n");

    }
    else //alphabet
        
    { 
        printf("ALPHA\n");
       
        if(x>64 && x<91) // uper case
        {
            printf("IS CAPITAL\n");
        }
        else{
            printf("IS SMALL\n");
        }
    }
    return 0;
}