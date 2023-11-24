#include<stdio.h>
int main()
{
    long long int m,n,k;
    long long int doll;
    scanf("%lld %lld %lld",&m, &n,&k);
    long long int  min;
    if(m<n && m<k){
        min = m;
    }
    else if(n<m && n<k){
        min = n;
    }
    else{
        min = k;
    }
    // using roule no 3
    doll = min;
    k = k- min;
    m -=min;
    n -=min;
    
    // using rule no 1
    if(m/2>k){
        doll += k;
    }
    else{
         doll += m/2; 
    }
    printf("%lld", doll);
    return 0;
}