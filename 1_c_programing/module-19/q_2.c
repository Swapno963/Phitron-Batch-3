#include<stdio.h>
int count(int n)
{
   if (n == 0)
   {
      return 0;
   }
   else
   {
      return 1 + count(n / 10);
   }
}

int main()
{
    int a = count(1);
    printf("%d",a);
    return 0;
}