#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(b != 0){
        int tem = b;
        b = a % b;
        a = tem;
    }
    return a;
}
int main()
{
    int a,b; cin >> a >> b;
    int result = gcd(a,b);
    long long x,y;
    x = a; y =b;
    long long lcm = (x*y)/result;
    cout << result <<" "<< lcm<<endl;
    return 0;
}