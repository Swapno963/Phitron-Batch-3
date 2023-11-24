#include<stdio.h>
int main()
{
    char c;
    int count[26] ={0};
     while(scanf("%c",&c)!=EOF){
        int val = c -'a';
        count[val]++;
      
      
     }

     for(char i='a';i<='z'; i++){
        if(count[i-'a']!=0){

          printf("%c : %d\n",i, count[i-'a']);
        }
     }
    return 0;
}