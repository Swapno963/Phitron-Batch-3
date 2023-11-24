#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a; cin >> a;
        int b = a;
        vector<int> v;
        bool isDone = false;
        while(!isDone)
        {
            if(((3*(a+2))%(a+a+1)) != 0) 
            {
                //cout << (3*(a+2)) << "  " << a+a+1<< endl;
                 v.push_back(a);
                 a++;
                 if(v.size() == b)
                    isDone = true;
            }
            else a++;

        }
        for(auto x : v)
            cout << x <<" ";
        cout << endl;
    }
    return 0;
}