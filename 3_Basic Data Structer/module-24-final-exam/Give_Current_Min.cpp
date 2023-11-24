#include<bits/stdc++.h>
using namespace std;
 int main()
{
    priority_queue<long long int,vector<long long int>, greater<long long int>>pq; // small to big

    long long int n; cin >> n;
    while(n--)
    {
        long long int x; cin >> x;
        pq.push(x);
    }
    //priority_queue<long long int> pq; // big to small
    
    int test_case;
    cin >> test_case;
    while(test_case--)
    {
        int c; cin >> c;
        if(c == 0)
        {
            long long int x; cin >> x;
            pq.push(x); // O(logN)
            cout << pq.top() << endl; // O(1)
        }
        else if(c == 1)
        {
            if(!pq.empty())
            {
                cout << pq.top() << endl; // O(logN)
            }
            else cout << "Empty" << endl;
        }
        else if(c == 2)
        {
            if(!pq.empty()) pq.pop();
            if(!pq.empty()) cout<< pq.top() << endl;
            else  cout << "Empty" << endl;
        }
    }
    
    return 0;
}