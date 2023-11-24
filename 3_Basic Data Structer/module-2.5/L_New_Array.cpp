#include<bits/stdc++.h>
using namespace std;
int main()
{
    //  worng ans,
    // may be last a extra " " ascha
    int n;
    cin >>n;
    vector <int> a(n);
    vector <int> b(n);

    for(int i=0; i<2; i++)
    {
        int x;
        cin >> x;
        a[i] =x;
    }

      for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        b[i] = x;
    }

    b.insert(b.begin()+2,a.begin(),a.end());

    for(int val:b)
    {
        cout << val <<" " ;
    }



    return 0;
}