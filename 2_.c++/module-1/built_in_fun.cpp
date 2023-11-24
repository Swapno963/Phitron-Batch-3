#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cin >>a>>b;
    int mx = max(a,b);
    int mn = min(a,b);
    cout <<"The max is "<<mx<<endl<<"The min is "<<mn;

    return 0;
}