#include<stdio.h>
#include<string.h>
int main()
{
    char a[10]; // windows gives extra memory but  linux or online compailer don't allow it.
    // they will give runtime or segmentation error
   // gets(a); // all compailer don't allow to use this
   fgets(a,13,stdin); // size kom dila prb nei but besi dila zamala
 a[2] ='\n';
//    fgets enter 
    printf("%s",a);
    return 0;
}