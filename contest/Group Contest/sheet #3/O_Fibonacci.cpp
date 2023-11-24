#include<bits/stdc++.h>
using namespace std;
long long fiob(int n)
{
    if(n == 1) return 0;
    if(n == 2) return 1;
    
    long long first = 0; long long second = 1;
    long long x = n-2;
    while(x--)
    {
        long long next = first + second;
        first = second;
        second = next;
    }
    return second;

    
}
int main()
{
    long long n; cin >> n;

    cout << fiob(n)<< endl;
    return 0;
}