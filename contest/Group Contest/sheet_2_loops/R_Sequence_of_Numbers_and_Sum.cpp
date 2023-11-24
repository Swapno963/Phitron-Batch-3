#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; 
    while(cin >> n >> m){
        if(n <=0 || m <=0) continue;
        else{ // both n and m is not equal or less then 0
            int st = min(n,m);
            int ed = max(n,m);
            long long sum = 0;
            for(int i=st; i<=ed; i++)
            {
                sum += i;
                cout << i << " ";
            }
            cout << "sum =" << sum<<endl;
        }
    }

    return 0;
}