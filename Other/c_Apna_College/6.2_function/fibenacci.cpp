#include<bits/stdc++.h>
using namespace std;

void fib(int n)
{
    int t1 = 1;
    int t2 = 1;
    int next;
    for(int i=1; i<=n; i++)
    {
        cout << t1 << " ";
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
}
int main()
{
    int n;
    cin >>n;
    fib(n);
    return 0;
}