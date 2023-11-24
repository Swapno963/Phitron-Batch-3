#include<bits/stdc++.h>
using namespace std;
int main()
{
    // implement stack and queue
    stack<int> st;
    queue<int> q;
    int n,m;
    cin >> n >> m;

    // taking input for stack
    while(n--)
    {
        int x; cin >>x;
        st.push(x);
    }

    // taking input for queue
    while(m--)
    {
        int x; cin >> x;
        q.push(x);
    }

    // main part start
    bool flag = true;
    if(st.size() == q.size()) // checking are size same or not
    {
         while(!st.empty()) // since both size are same so we can take any of them
        {
            if(st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }
    else{
        flag = false;
    }
    
    flag ? cout <<"YES" : cout <<"NO";
    
    return 0;
}