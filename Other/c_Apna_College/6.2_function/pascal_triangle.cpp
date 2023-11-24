#include<bits/stdc++.h>
using namespace std;

int frac(int n)
{
    int fr = 1;
    for(int i=1; i<=n; i++)
    {
        fr *= i;
    }
    return fr;
}
void print_pascal_triangel(int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout << frac(i)/(frac(j)*frac(i-j)) << " ";

        }
        cout << endl;
    }
}
int main()
{
    int n,m;
    cin >> n >> m;
    print_pascal_triangel(n,m);
    return 0;
}