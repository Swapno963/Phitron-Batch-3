#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case; cin >> test_case;
    for(int i=0; i<test_case; i++)  // run for every test case
    {
        int n; cin >> n;
        set<int> s;
        vector<int> v;

        // inserting array element to set
        for(int j=0; j<n; j++)
        {   int x; cin >> x;
            s.insert(x);
        }

        // after removing duplicate, inseert to vector
        for(auto it=s.begin(); it !=s.end(); it++)
        {
            v.push_back(*it);
        }

        // printing last element then remore it
        while(!v.empty())
        {
            cout << v.back() << " ";
            v.pop_back();
        }
        cout << endl;
    }
    return 0;
}