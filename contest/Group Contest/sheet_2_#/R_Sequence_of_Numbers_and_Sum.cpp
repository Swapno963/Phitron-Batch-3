#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin >> a >> b){
        if(a<=0 || b <=0)
            break;
        int st = min(a,b);
        int ed = max(a,b);
        long long sum = 0;
        for(int i=st; i<=ed; i++)
        {
            sum +=i;
            cout << i << " ";
        }
        cout << "sum" << " =" << sum << endl;;
    }
    return 0;
}