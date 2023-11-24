#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n; cin >> n;
    long long sum = 0;
    int root = sqrt(n);
    for(int i=1; i<=root; i++)
        if(n % i == 0){
            sum +=i;
            if(i != n/i)
                sum += (n/i);
        }
    cout << sum << endl;
    return 0;
}