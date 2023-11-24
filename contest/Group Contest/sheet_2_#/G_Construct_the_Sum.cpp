#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n, s;
        int sum = s;
        vector<int> v;
        while(s != 0)
        {
            if(s < n)
            {
                sum -= s;
                v.push_back(s);
            }

            s--;
        }
        
    }
    return 0;
}