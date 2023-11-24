#include<bits/stdc++.h>
using namespace std;
int main()
{
int count = 0;
for (int i = n; i > 0; i /= 2) 
{
    for (int j = 0; j < n; j+=5) 
   {
        count += 1;
    }
}

//complextity : nlogn


for(int i =1; i*i<n; i++)
{
     cout << “hello”;
}
 //complexity : O(root n)


 for(int i =1; i<n; i=i*2)
{
   for(int j=1; j*j<n; j+=2)
  {
      cout << “hello”;
   }
}
//complexity : O(logn root n)

int m = 1;
for(int i=0; m<=n; i++)
{
    m+=i;
}
complexity : root n
    return 0;
}