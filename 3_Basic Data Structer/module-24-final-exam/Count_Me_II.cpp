#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case; cin >> test_case;
    while(test_case--)
    {
        int n; cin >> n;
        map<int,int> mp;

        while(n--) //incrise count
        {
            int x; cin >> x;
            mp[x]++;
        }
        
        int max_value = INT_MIN;
        int max_count = 0;
        for(auto it= mp.begin(); it != mp.end(); it++)
        {
            if(it->second >= max_count && max_value < it->first)
            {
                max_value = it->first;
                max_count = it->second;

            }
        }

        cout << max_value << " " << max_count << endl;


    }
    return 0;
}