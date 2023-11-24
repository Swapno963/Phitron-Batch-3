#include<bits/stdc++.h>
using namespace std;
int *fun()
{
    int *x = new int[5];
    for(int i=0; i<5; i++)
    {
        cin >> x[i];
    }
    return x;
}
int main()
{
    int *a = fun();
    for(int i=0; i<5;i++)
    {
        cout << a[i] <<" ";
    }
    return 0;
}