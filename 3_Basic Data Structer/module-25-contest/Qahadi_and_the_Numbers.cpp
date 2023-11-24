#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;   cin >> test_case; 
    while(test_case--)
    {
     
        set<long long int> s;
        int n; cin >> n;
        int m = n;
        while(n--)
        {   long long int x; cin >> x;
            s.insert(x);
        }
        cout << m - s.size() << endl;
    }
    return 0;
}