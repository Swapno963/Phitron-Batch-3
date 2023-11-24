#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 4 num a wrong ans
    int n; cin >> n;
    vector <int> v(n);

    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        v[i] = x;
    }

    int count = 0;
    for(int val:v)
    {
        for(int c:v)
        {
            if(val+1 == c){
                 count++;
                 cout <<val <<c <<endl;
            }
        }
    }
    cout <<count;
    return 0;
}