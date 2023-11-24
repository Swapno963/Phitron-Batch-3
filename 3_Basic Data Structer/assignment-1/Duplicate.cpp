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

    bool flag = false;
     for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i !=j &&v[i] == v[j])
                {
                    flag = true;
                    break;
                    //cout << v[i] << endl;
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