#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)   
    {
        scanf("%d",&a[i]);
    }
    int cmt[7] ={0};

    // pringing arr
    for(int i=0; i<n; i++)
    {
       int val = a[i];
       cmt[val]++;
    }
      
    for(int i=0; i<=6; i++)   
    {
       printf("%d ace %d bar\n",i,cmt[i]);
    }
 
 return 0;
}