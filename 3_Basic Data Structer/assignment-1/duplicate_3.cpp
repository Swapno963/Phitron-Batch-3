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
    sort(v.begin(),v.end());
    bool flag = false;
     for(int i=0; i<n-1; i++)
    {
       if(v[i] == v[i+1])
       {
        flag = true;
        break;
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