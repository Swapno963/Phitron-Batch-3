#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case; cin >> test_case;
    while(test_case--)
    {
        int n; cin >> n;
        int m = n;
        vector<long long int> v;
        while(n--)
        {
            long long int x; cin >> x;
            v.push_back(x);
        }
        
        sort(v.begin(), v.end());
        long long int sp = v[m-1];
        for(int i=0; i<m-2; i+=2)
        {
            if(v[i] == v[i+1])
            {
                continue;
            }
            else
            {
                sp = v[i];
                break;
            }
        }
   
        cout << sp  ;
        cout << endl;
        
   
  

      
        
    }
    return 0;
}