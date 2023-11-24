#include<bits/stdc++.h>
using namespace std;
int *fun()
{
    int *arr = new int[5]; // because of this we can access
    for(int i=0; i<5; i++)
    {
        cin >>arr[i];
    }
    return arr;
}
int main()
{
    int *a = fun();
    for(int i=0; i<5; i++)
    {
        cout << a[i] <<" ";
    }
    return 0;
}