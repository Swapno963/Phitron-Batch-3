#include<bits/stdc++.h>
using namespace std;
int main()
{
    // queue works like queue
    queue<string> q;

    int query; cin >> query;
    
    // work query times
    while(query--)
    {
        int num; cin >> num;
        string name;
        if(num == 0 )
        {
            cin >> name;
            q.push(name);
        }
        else
        {
            if(q.size() == 0) cout <<"Invalid" <<endl;
            else
            {
                cout << q.front()<< endl;
                q.pop();
            }
        }
    }
    
    return 0;
}