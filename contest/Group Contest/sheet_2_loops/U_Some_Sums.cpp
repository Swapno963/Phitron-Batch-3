#include<bits/stdc++.h>
using namespace std;

int is_between(int x,int a,int b)
{
    int num = x;
    int sum = 0;
    while(num > 0)
    {
        int degit = num % 10;
        sum += degit;
        num /= 10;
    }
    if(sum >= a && sum <= b) return x;
    return 0;
}
int main()
{
    int n,a,b; cin >> n >> a >> b;
    int result = 0;
    for(int i=1; i<=n; i++)
    {
        result += is_between(i,a,b);
    }
    cout << result << endl;
    return 0;
}