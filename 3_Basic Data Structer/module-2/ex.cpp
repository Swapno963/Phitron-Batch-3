#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<int> v={1,2,3,4,5};
    //v.erase(v.begin()+1, v.end());
    //v.insert(v.begin()+2,100);
    vector<int> v={1,2,3,4};
    v.resize(2);
    v.resize(4);
    for(int a:v)
    {
        cout << a<<" ";
    }
    return 0;
}