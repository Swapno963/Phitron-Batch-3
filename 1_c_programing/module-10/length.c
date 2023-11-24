#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    
    // way 1 : for loop
    /*
    int count = 0;
    for(int i=0; a[i]!='\0'; i++){
        count++;
    }
    printf("%d",count);
    */

   //way 2: while loop
   /*
   int i=0;
   int count=0;
   while(a[i]!='\0'){
    count++;
    i++;
   }
   printf("%d",count);
   */

  // way 3: strlen
  int st = strlen(a);
  printf("%d",st);

   return 0;
}