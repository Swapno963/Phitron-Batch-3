#include<stdio.h>
#include<string.h>
int fun(char a[],int i)
{
    if(a[i] == '\0') return 0;
    
    int ans = fun(a,i+1);
    if(a[i]>='A' && a[i]<='Z')
    {
        a[i] += 32;
        //printf("%c",a[i]);
    }
   // printf("%c\n",a[i]);
    if(a[i]=='a' ||  a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
    {
        //printf("%c\n",a[i]);
        return ans+1;
    }
    else{
        return ans;
    }
}
int main()
{
  //  printf("%c",'A'+32);

    char qus[200];
    fgets(qus,200,stdin);
   // printf("%d",strlen(qus));
    int res = fun(qus,0);
    printf("%d",res);
    return 0;
}