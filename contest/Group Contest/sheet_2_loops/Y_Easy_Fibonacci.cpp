#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num; cin >> num;
    int x = num;
    num /=2; num ++;
    int st = 0;
    int st2 = 1;
    vector<int > v;

    while(num--)
    {
        v.push_back(st);
        v.push_back(st2);
        // cout << st << " " << st2 << " ";
        st += st2;
        st2 += st;
    }
    for(int i=0; i<x; i++) cout << v[i] << " ";
    return 0;
}