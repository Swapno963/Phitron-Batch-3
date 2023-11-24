#include<stdio.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s",a,b);

    int i=0;
    while (1)
    {
        if(a[i] == '\0' && b[i] == '\0'){ // are they ended at the same time
            printf("same");
            break;
        }
        else if (b[i] =='\0') // is b ended first
        {
            printf("b choto");
            break;
        }
        else if (a[i] =='\0') // is a ended first
        {
            printf("a choto");
            break;
        }

        else if(a[i] == b[i]){ // if botha are same
            i++;
        }
        else if (a[i]<b[i])     
        {
           printf("a choto");
           break;
        }
        else{
            printf("b choto");
            break;
        }
        
        
        
    }
    
    return 0;
}