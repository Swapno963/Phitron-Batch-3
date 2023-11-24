#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,k;
    scanf("%lld %lld",&n, &k);
    int arr[n];

// taking arr input
    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
   int start = 0;
//    loop should go
   int to;
   if(n>k)
   {
    to = k;
   }
   else{
    to = sizeof(arr)/sizeof(int);
   }
   
   int i_to;

// rotation of oiuter loop
   if(n%k == 0){
    i_to = n/k;
   }
   else
   {
    i_to = (n/k)+1;
   }
   
   for(int i = 0; i<i_to; i++)
   {
    int min = arr[start];
    for(int j =start; j<to; j++)
    {
        if(min > arr[j])
        {
            min = arr[j];
        }
    }
    printf("%d ",min );
 
//    incriseing start and end
    start = to;
    if(to + k < n){
        to+=k;
    }
     else{
        to = sizeof(arr)/sizeof(int);
   }
   
   }
  return 0;
}