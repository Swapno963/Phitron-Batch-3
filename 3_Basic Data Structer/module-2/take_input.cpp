#include<bits/stdc++.h>
using namespace std;
int main()
{
    // there is two way of taking input

    // one
    // int n;
    // cin >>n;
    // vector <int> v(n);
    // for(int i=0; i<n; i++)
    // {
    //     cin >> v[i];
    // }

    // second way
    vector<int> v2;
    int n;
    cin >> n;
    for(int i=0;i<n; i++)
    {
        int x ;
        cin >> x;
        v2.push_back(x);
    }



    // printing element
    for(int i=0; i<n; i++)
    {
        cout << v2[i] << " ";
    }
    return 0;
}