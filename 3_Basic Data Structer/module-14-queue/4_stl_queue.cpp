#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;

    // taking input
    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    // seeing front then pop that
    while(!q.empty())
    {
        cout << q.front() <<endl;
        q.pop();
    }
    return 0;
}