#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >>n;
    vector <int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    bool flag = false;
    int l = 0; 
    int r = n-1;
     for(int i=0; i<n; i++)
    {
        while(l<=r)
        {
            int mid_ind = (l+r)/2;
            if(v[mid_ind] == v[i])
            {
                if( v[i] == v[mid_ind-1] || v[i] == v[mid_ind+1] )
                {
                flag = true;
                break;
                }
            }
            if(v[i]> v[mid_ind])
            {
                l = mid_ind+1;
            }
            else{
                r = mid_ind-1;
            }

        }
       
    }
    if(flag)
    {
        cout <<"YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}