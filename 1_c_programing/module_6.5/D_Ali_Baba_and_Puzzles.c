#include<stdio.h>
int main()
{   
    long long int a;
    int b,c;
    long long int d;
    scanf("%lld %d %d %lld",&a,&b,&c,&d);
    if(a + b -c == d){
        printf("YES");
    }
      else if(a - b +c == d){
    printf("YES");
    }
      else if(a + b *c == d){
    printf("YES");
    }
      else if(a * b +c == d){
    printf("YES");
    }
      else if(a * b -c == d){
    printf("YES");
    }
      else if(a - b *c == d){
    printf("YES");
    }

    else{
        printf("NO");
    }
    return 0;
}