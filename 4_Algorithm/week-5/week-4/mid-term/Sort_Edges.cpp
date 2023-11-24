#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    
    priority_queue<pair<long long int, long long int>, vector<pair<long long int, long long int>>, greater<pair<long long int, long long int>>> pq;

    while(n--)
    {
        long long int a,b; cin >> a >> b;
        pq.push({a,b});
    }

    while(!pq.empty())
    {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }
    return 0;
}