#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case; cin >> test_case;
    while(test_case--)
    {
        int n; cin >> n;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i=0; i<n-2; i++)
        {
            if(v[i] == v[i+1])
            {
                cout << v[i] << endl;
                break;
            }
        }
        //for(auto a:v) cout << a << " ";
    }
    return 0;
}