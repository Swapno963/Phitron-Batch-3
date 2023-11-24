#include<bits/stdc++.h>
using namespace std;
void swap_it(int a,int b)
{
    int xa = a;
    a = b;
    b = xa;
    cout << a << " " << b;
}
int main()
{
    int a,b; cin >>a >> b;
    swap_it(a,b);
    return 0;
}