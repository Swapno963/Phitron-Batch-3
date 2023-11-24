#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[5];
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }

    int *b = new int[5];  
    for(int i=0; i<5; i++)
    {
       b[i] = a[i];
    }
    delete[] a;

  for(int i=0; i<5; i++)
    {
        cout<<b[i] <<" ";
    }
    return 0;
}